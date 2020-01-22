// Sorter.cpp: реализация CSorter

#include "pch.h"
#include "Sorter.h"


// CSorter

//Сортировка
template<class T>
void mergeSort(T first, T last, VARIANT_BOOL* isAbort) {
	//Проверка отмены
	if (*isAbort == VARIANT_TRUE) return;
	if (last - first > 1) {
		T middle = first + (last - first) / 2;
		mergeSort(first, middle, isAbort);
		mergeSort(middle, last, isAbort);
		inplace_merge(first, middle, last);
	}
}

std::filesystem::path BstrToPath(BSTR str) {
	return std::filesystem::path(std::wstring(str, SysStringLen(str)));
}

// операции с файлом
void Program(const std::filesystem::path& inputFlie,
	const std::filesystem::path& outputFlie,
	const SortType& st, VARIANT_BOOL* isAbort)
{
	constexpr size_t uintSize = sizeof(size_t);
	const size_t uintCount = static_cast<size_t>(std::filesystem::file_size(inputFlie)) / uintSize;

	// открываем файл
	std::ifstream input(inputFlie, std::ios::binary);
	if (input) {
		//Если ок, узнаем размер файла, создаем вектор, заполняем его
		std::vector<size_t> nums(uintCount);
		for (size_t& num : nums) {
			input.read((char*)&num, uintSize);
			if (*isAbort == VARIANT_TRUE) return;
		}
		input.close();

		// сортируем
		if (st == SortType::increase) mergeSort(nums.begin(), nums.end(), isAbort);
		else mergeSort(nums.rbegin(), nums.rend(), isAbort);

		// пишем в файл
		std::ofstream output(outputFlie, std::ios::binary);
		if (output && (*isAbort == VARIANT_FALSE))
			for (size_t& num : nums)
				output.write((char*)&num, uintSize);
	}
}

STDMETHODIMP CSorter::SetInputFile(BSTR str) {
	inputFlie = BstrToPath(str);
	return S_OK;
}

STDMETHODIMP CSorter::SetOutputFile(BSTR str) {
	outputFlie = BstrToPath(str);
	return S_OK;
}

STDMETHODIMP CSorter::SetIncrease() {
	sortType = SortType::increase;
	return S_OK;
}

STDMETHODIMP CSorter::SetDecrease() {
	sortType = SortType::decrease;
	return S_OK;
}

STDMETHODIMP CSorter::Start() {
		Program(inputFlie, outputFlie, sortType, isAbort);
	return S_OK;
}

/*STDMETHODIMP CSorter::Abort() {
	isAbort = true;
	return S_OK;
}*/

STDMETHODIMP CSorter::SetAbortPointer(VARIANT_BOOL* pAbort) {
	isAbort = pAbort;
	return S_OK;
}
