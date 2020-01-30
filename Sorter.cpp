// Sorter.cpp: реализация CSorter

#include "pch.h"
#include "Sorter.h"

// CSorter

//Сортировка
template<class T>
void mergeSort(T first, T last, SHORT* pAbort) {
	//Проверка отмены
	if (*pAbort) throw int();
	if (last - first > 1) {
		T middle = first + (last - first) / 2;
		mergeSort(first, middle, pAbort);
		mergeSort(middle, last, pAbort);
		if (*pAbort) throw int();
		inplace_merge(first, middle, last);
	}
}

std::filesystem::path BstrToPath(BSTR str) {
	return std::filesystem::path(std::wstring(str, SysStringLen(str)));
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

STDMETHODIMP CSorter::Start(SHORT* pAbort) {
	//Узнаем размер файла и сколько uint ов потребуется обработать
	constexpr size_t uintSize = sizeof(size_t);
	const size_t uintCount = static_cast<size_t>(std::filesystem::file_size(inputFlie)) / uintSize;

	// открываем файл
	std::ifstream input(inputFlie, std::ios::binary);
	if (input) {
		//Если ок, создаем вектор, заполняем его
		std::vector<size_t> nums(uintCount);
		if (*pAbort == 0) {
			for (size_t& num : nums) {
				input.read((char*)&num, uintSize);
				//if (*isAbort == TRUE) return S_OK;
			}
			input.close();
		}

		// сортируем
		try {
			if (sortType == SortType::increase)
				mergeSort(nums.begin(), nums.end(), pAbort);
			else
				mergeSort(nums.rbegin(), nums.rend(), pAbort);
		}
		catch (...) {
			return E_ABORT;
		}
		// пишем в файл
		std::ofstream output(outputFlie, std::ios::binary);
		if (output)
			for (size_t& num : nums)
				output.write((char*)&num, uintSize);
		return S_OK;
	}
	return E_FAIL;
}

/*STDMETHODIMP CSorter::SetAbortPointer(BOOL* pAbort) {
	isAbort = pAbort;
	return S_OK;
}*/
