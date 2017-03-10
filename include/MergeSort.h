#ifndef _MergeSort_H
#define _MergeSort_H

class MergeSort
{
	private:
		int mid;

		int *AuxillaryArray;
	
		void MergeArrays (int *Array, int low, int mid, int high);

		void PartitionArray (int *Array, int low, int high);

	public:
		MergeSort ();

		void sort (int *Array, int N);
};

#endif
