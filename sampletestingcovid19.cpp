#include <iostream>
using namespace std;
int main()
{
    int samplestobetested,numofbatches,samplesperbatch,positivityrate;
    cout<<"Enter The no. of samples to be tested = ";
    cin>>samplestobetested;
    cout<<"\nSo the no. of samples to be tested = "<<samplestobetested;
    cout<<"\n\nHow many samples are to divided per batch = ";
    cin>>samplesperbatch;
    cout<<"\nSo the no. of  samples per batch are "<<samplesperbatch;
    numofbatches=samplestobetested/samplesperbatch;
    cout<<"\n\nNo. of batches are "<<numofbatches;
    cout<<"\n\nEnter the Postivity Rate = ";
    cin>>positivityrate;
    cout<<"\nSo the Postivity Rate is "<<positivityrate<<"%";
    int numofsamplestoberetested;
    numofsamplestoberetested=((samplestobetested*positivityrate)/100)*samplesperbatch;
    cout<<"\n\nThe No. of samples to be Re-tested are "<<numofsamplestoberetested;
    int totalnumoftestperformed;
    totalnumoftestperformed=1+numofbatches+numofsamplestoberetested;
    cout<<"\n\nTotal no. of test done are "<<totalnumoftestperformed;
    return 0;
}
