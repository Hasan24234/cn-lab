package day;

class prg123432 {
    public static void main(String[] args) {
    
        int arr[]={2,3,5,5,5,6,7,8};
        int n=arr.length;
        int start=0;
        int end=n-1;
        int x=5;
        int ans=n;

        while(start<=end){
            int mid=(start+end)/2;
            if(arr[mid]>=x){
                ans=mid;
                end=mid-1;
            }else if(arr[mid]<x){
                start=mid+1;
            }

            
        }
        int start1=0;
        int end1=n-1;
        int x1=5;
        int ans1=n;
        

        while (start<=end1) {
            int mid1=(start+end)/2;
            if (arr[mid1]>x1) {
                ans1=mid1;
                end1=mid1-1;
                
            }else if(arr[mid1]<x){
                start1=mid1+1;
            }
            
        }
        System.out.println(ans);
        System.out.println(ans1);
    }

    
}