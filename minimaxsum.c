long int extrema(int count, int arr[])
{
    long int sum = 0;
    for(int i = 0; i < count; i++)
        sum += arr[i];
    return sum;
}
void miniMaxSum(int arr_count, int* arr)
{
    int lowest = arr[0]; int highest = 0; 

    for (int i = 0; i < arr_count; i++)
    {
        if(arr[i] > highest)
            highest = arr[i];
        if(arr[i] < lowest)
            lowest = arr[i];
    }
    printf("%ld ", ((extrema(arr_count, arr))-highest));
    printf("%ld", ((extrema(arr_count, arr))-lowest));
}
    
