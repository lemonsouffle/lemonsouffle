// #include <string>
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     if (((a+b)%2==0 && (c+d)%2==0) || ((a+b)%2!=0 && (c+d)%2!=0)){
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }
//     return 0;
// }

// #include <string>
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;
//     if ((abs(a-c)==2 && abs(b-d)==1) || (abs(a-c)==1 && abs(b-d)==2)){
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }
//     return 0;
// }

// #include <string>
// #include <iostream>
// #include <math.h>
// using namespace std;
// int main(){
//     int a,b,c, max_n;
//     cin >> a >> b >> c;
//     max_n = a;
//     if (b > max_n){
//         max_n = b;
//     }
//     if (c > max_n) {
//         max_n = c;
//     }
//     cout << max_n;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a==b && b == c){
//         cout << 3;
//     } else if(a==b || a==c || b==c){
//         cout << 2;
//     } else{
//         cout << 0;
//     }
    
//     return 0;
// }

// abc, acb, bac, bca, cab, cba
// #include <iostream>
// using namespace std;
// int main(){
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a<=b && b<=c){
//         cout << a << " " << b << " " << c;
//     } 
//     else if (a<=c && c<=b){
//         cout << a << " " << c << " " << b;
//     } 
//     else if (b<=a && a<=c){
//         cout << b << " " << a << " " << c;
//     }
//     else if (b<=c && c<=a){
//         cout << b << " " << c << " " << a;
//     }
//     else if (c<=a && a<=b){
//         cout << c << " " << a << " " << b;
//     }
//     else if (c<=b && b<=a){
//         cout << c << " " << b << " " << a;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     if(n%10==1 && n%100!=11){
//         cout << n << " " << "bochka";
//     } else if((n%10==2 || n%10==3 || n%10==4) && !(n%100 > 11 && n%100 < 15)){
//         cout << n << " " << "bochki";
//     } else{
//         cout << n << " " << "bochek";
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a, b;
//     cin >> a >> b;
//     if (a == 0 && b == 0) {
//         cout << "INF";
//     }
//     else if (a == 0 || b%a != 0){
//         cout << "NO";
//     }
//     else {
//         cout << -b/a;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     long long x,res;
//     cin >> x;
//     res=2;
//     while (x%res!=0 && (res * res) <= x){
//       res++;
//     }
//     if (x%res == 0) {
//       cout << res;
//     }
//     else {
//       cout << x;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int n, prev, curr, i, s;
//     cin >> n;
//     prev = 0;
//     curr = 1;
//     i = 1;
//     while (curr< n){
//       i++;
//       s = prev + curr; 
//       prev = curr;
//       curr = s;
//     }
//     if (curr==n){
//       cout << i;
//     }else{
//       cout << -1;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int x,p,y,res;
//     cin >> x >> p >> y;
//     x = 100 * x;
//     y = 100 * y;
//     res = 0;
//     while (x < y){
//         res++;
//         x = x + x * p / 100;
//     }
//     cout << res;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int min_1 = 1000000001, min_2 = 1000000001, i;
//     cin >> i;
//     while (i != 0){
//         if (i<min_1){
//             min_2=min_1;
//             min_1=i;
//         }else if (i<min_2){
//             min_2=i;
//         }
//         cin >> i;
//     }
//     cout << min_2;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int prev, curr, res;
//   cin >> prev; 
//   // prev = curr;
//   res=0;
//   while (curr != 0) {
//     cin >> curr;
//     }
//     if (curr > prev) {
//       res++;
//       prev=curr;
//     }
//   cout << res; 

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int res, n_2, n_1, n;
//   cin >> n_2 >> n_1 >> n;
//   res = 0;
//   while (n != 0){
//     if (n_1 > n_2 && n_1 > n){
//       res++;
//     }
//     n_2 = n_1;
//     n_1 = n;
//     cin >> n;
//   }
//   cout << res;
//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//   int n, sum=0, count=0;
//   cin >> n;
//   while (n != 0){
//     sum+=n;
//     count++;
//     cin >> n;
//   }
//   cout << float(sum)/count;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
// for (int i = 1; i <= 100; ++i){
//   cout << i << " ";
// }
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int a,b;
//   cin >> a >> b;
//   for (int i = a; i <= b; ++i){
//     cout << i << " ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//   int a,b;
//   cin >> a >> b;
//   if (a<b){
//     for (int i = a; i <= b; ++i)
//       cout << i << " ";
//   }else{
//     for (int i = a; i >= b; --i)
//       cout << i << " ";
//   }
//   return 0;

// 12 * 10 * 12 * 14 * 18 * 10 * 11 * 12 * 13 * 14 * 15 > 100 000 000 000
// 2 ** 31 = 2 147 483 648
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   long long res;
//   cin >> n;
//   res = // 1;
// // for (int i=1;i<=n;++i){
//     res*=i;
//   }
//   cout << res;
//   return 0;
// }

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int d;
//     cin >> d;
//     int mind = 1, maxd;
//     for (int i = 1; i < d ; ++i){
//         mind *= 10;
//     }
//     maxd = mind * 10 - 1;
//     for (int i = mind; i <= maxd; ++i){
//         cout << i << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, c, d, res;
//     cin >> a >> b >> c >> d;
//     for (int x = 0; x <= 1000; ++x){
//       if ((a * x * x * x + b * x * x + c * x + d) == 0){
//         cout << x << endl;
//       }     
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cin >> a >> b;
//     for (int i = a+a%2; i<=b; i+=2){
//         cout << i << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     long long a,b,c,d,start,j;
//     cin >> a >> b >> c >> d;
//     start=a+(c-a%d+d)%d;
//     j=d;
//     for (int i = start; i<=b;i+=j){
//         cout << i << " ";
//     }
//     return 0;
// }

// Сумма факториалов
// #include <iostream>
// using namespace std;
// int main()
// {
//     long long a,res=1,s=1;
//     cin >> a;
//     for (int i = 2; i<=a; ++i){
//       s*=i;
//       res+=s;
//     }
//     cout << res;
//     return 0;
// }

// Сумма степеней двойки
// #include <iostream>
// using namespace std;
// int main() {
//   long long n, s=1, res=0;
//   cin >> n;
//   for (int i=0;i<=n;++i){
//     res += s;
//     s *= 2;
//   }
//   cout << res;
//   return 0;
// }

// Числов в столбик
// #include <iostream>
// using namespace std;
// int main() {
//   long long n, res=0;
//   int flag = 0;
//   cin >> n;
//   for (int i=1000000000;i>0;i = i/10){
//     res = n / i;
//     if (res > 0) {
//       flag = 1;
//     }
//     if (flag == 1) {
//       cout << res << endl;
//     }
//     n = n % i;
//   }
//   return 0;
// }

// Список степеней двойки
// #include <iostream>
// using namespace std;
// int main() {
//   long long n;
//   cin >> n;
//   for (int i=1;i<=n; i *= 2){
//     cout << i << endl;
//   }
//   return 0;
// }

// Список квадратов
// #include <iostream>
// using namespace std;
// int main() {
//   long long n, res;
//   cin >> n;
//   for (int i=1;i<=n; ++i){
//     res = i * i;
//     if (res>n){
//       break;
//     }
//     cout << res << endl;
//   }
//   return 0;
// }

// Точная степень двойки
// #include <iostream>
// using namespace std;
// int main() {
//   int n, res = 1;
//   cin >> n;
//   for (int i=1;i<=n; ++i){
//     if (res == n) {
//       cout << "YES";
//       break;
//     }
//     if (res > n){
//       cout << "NO";
//       break;
//     }
//     res *= 2; 
//   }
//   return 0;
// }

// Точная степень двойки
// #include <iostream>
// using namespace std;
// int main() {
//   int n;
//   cin >> n;
//   for (int i=1;i<=n; i *= 2){
//     if (i == n) {
//       cout << "YES";
//       return 0;
//     }

//   }
//   cout << "NO"; 
//   return 0;
// }

// Геометрическая прогрессия 1 + a ** 1 + a ** 2 + a ** 3 + ... + a ** n
// #include <iostream>
// using namespace std;
// int main() {
//   long long a, n, res, s;
//   cin >> a >> n;
//   s = a;
//   res = 1;
//   for (int i=1;i<=n; ++i){
//     res += s;
//     s *= a;
//   }
//   cout << res;
//   return 0;
// }

//  Вывести числа от a до b, которые при деление на d дают остаток c
// #include <iostream>
// using namespace std;
// int main() {
//   long long a, b, c, d;
//   cin >> a >> b >> c >> d;
//   for (int i=a;i<=b; ++i){
//     if (i%d==c){
//       cout << i << " ";
//     }
//   }
//   return 0;
// }

//  Вывести полные квадраты от a до b
// #include <iostream>
// using namespace std;
// int main() {
//   long long a, b;
//   cin >> a >> b;
//   for (int i=1;i<=b; ++i){
//     if (((i * i) <= b) && ((i * i) >= a)){
//       cout << i * i << " ";
//     }
//     if ((i * i) > b){
//       break;
//     }
//   }
//   return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; ++i){
//         cin >> v[i];
//     }
//     for (int i = 0; i < n / 2; ++i){
//         int temp = v[i];
//         v[i] = v[n - 1 - i];
//         v[n - 1 - i] = temp;
//     }
//     for (int i = 0; i < n; ++i){
//         cout << v[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i){
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i+=2){
//         cout << a[i] << " ";
//     }
//     return 0;
// }

// push_back() - добавляет элемент в конец vector.
// pop_back() - удаляет последний элемент vector.
// size() - возвращает размер vector.
// clear() - очищает vector.
// insert() - вставляет элемент в конкретную позицию
// at() - возвращает элемент в конкретной позиции
// capacity() - возвращает количество элементов, которое vector может вместить без перевыделения памяти.
// resize() - изменяет размер vector.

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i){
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; ++i){
//         if (a[i]%2==0){
//             cout << a[i] << " ";
//         }
//     }
//     return 0;
// }

// наименьший положительный
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n,imn=100;
//     cin >> n;
//     vector<int> a(n);
//     for (int i = 0; i < n; ++i){
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; ++i){
//         if (a[i]>0 && a[i]<imn){
//             imn=a[i];
//         }
//     }
//     cout << imn;
//     return 0;
// }

// посчитать количество чисел от 1 до 9, которые встречаются в массиве
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, t;
//     cin >> n;
//     vector<int> a(10);
//     for (int i = 0; i < 10; ++i){
//         a[i] = 0;
//     }
//     for (int i = 0; i < n; ++i){
//         cin >> t;
//         ++a[t];
//     }
//     for (int i = 1; i < 10; ++i){
//         cout << a[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     vector<int> A(n);
//     for (int i = 0; i < n; ++i){
//         cin >> A[i];
//     }
//     if (A.size()!=0){
//         for( int i=k; i<(n- 1); i++){
//             swap(A[i],A[i+1]);  // A[i], A[i + 1] = A[i + 1], A[i]
//         }
//         A.pop_back();
//     }
//     for (int i = 0; i < (n - 1); ++i){
//         cout << A[i] << " ";
//     }
//     return 0;
// }

// два минимума
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, min1 = 100000, min2 = 100000;
//     cin >> n ;
//     vector<int> A(n);
//     for (int i = 0; i < n; ++i){
//         cin >> A[i];
//     }
//     for (int i = 0; i < n; i++){
//         if (A[i]<min1){
//             min2=min1;
//             min1=A[i];
            
//         }else if (A[i]<min2){
//             min2=A[i];
//         }
//     }
//     cout << min1 << " " << min2;
//     return 0;
// }

// неубывающий подотрезок
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, end, res=0, i;
//     cin >> n ;
//     vector<int> A(n);
//     for (i = 0; i < n; ++i){
//         cin >> A[i];
//     }
//     end = A[0];
//     for (i = 1; i < n; i++){
//         if (A[i] < end) {
//             res++;
//         }
//         end = A[i];
//     }
//     res++;
//     cout << res << endl;
//     for (i=0; i<n; ++i){
//         cout << A[i] << " ";
//     }
//     return 0;
// }

// максимальное произведение (найти два числа, у которых произведение максимально)
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, i, min1=0,min2=0,max1=0,max2=0;
//     cin >> n ;
//     vector<int> A(n);
//     for (i = 0; i < n; ++i){
//         cin >> A[i];
//     }
//     if (n > 2)
//         {
//             for (i = 0; i < n; i++){
//             if (A[i]<min1){
//                 min2=min1;
//                 min1=A[i];
//             } else if (A[i]<min2){
//                 min2=A[i];
//             }
//             if (A[i]>max1){
//                 max2=max1;
//                 max1=A[i];
//             } else if (A[i]>max2){
//                 max2=A[i];
//             }
//         }
    
//         if(min1*min2>max1*max2){
//             cout << min1 << " " << min2;
//         }else{
//             cout << max2 << " " << max1;
//         }
//     }
//     else {
//         if (A[0] < A[1]) cout << A[0] << " " << A[1];
//         else cout << A[1] << " " << A[0];
//     }

//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, summa = 0, mult = 1, i_min = 0, i_max = 0;
//     cin >> n; 
//     vector <int> g(n); 
//     cin >> g[0];
//     if (g[0] > 0) {
//         summa += g[0];
//     }
//     for (int i = 1; i < n; ++i) {
//         cin >> g[i];
//         if (g[i] > 0) {
//             summa += g[i];
//         }
//         if (g[i] < g[i_min]) {
//             i_min = i;
//         }
//         if (g[i] > g[i_max]) {
//             i_max = i;
//         }
//     }
//     if (i_min > i_max) {
//         swap(i_min, i_max);
//     }
//     for (int i = (i_min + 1); i < i_max; i++) {
//         mult *= g[i];
//     }
//     cout << summa << " " << mult;
//     return 0;
// }

// заполнение двумерного массива по столбцам
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m; 
//     vector<vector<int> > t(n, vector<int> (m, 0));
//     int c = 0;
//     for (int j = 0; j < m; ++j){
//         for (int i = 0; i < n; ++i){
//             t[i][j] = c;
//             ++c;
//         }
//     }
    
//     for (int i = 0; i < t.size(); ++i){
//         for (int j = 0; j < t[i].size(); ++j){
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return 0;
// }

// заполнение двумерного массива в шахматном порядке
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m; 
//     vector<vector<int> > t(n, vector<int> (m, 0));
//     for (int i = 0; i < n; ++i){
//         for (int j = 0; j < m; ++j){
//             if((i+j)%2==0){
//                 t[i][j] = 1;
//             }else{
//                 t[i][j] = 0;
//             }
//         }
//     }



//     for (int i = 0; i < t.size(); ++i){
//         for (int j = 0; j < t[i].size(); ++j){
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// транспорнирование
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n; 
//     vector<vector<int> > t(n, vector<int> (n, 0));
//     for (int i = 0; i < n; ++i){
//         for (int j = 0; j < n; ++j){
//             cin >> t[i][j];
//         }
//     }

//     for (int i = 0; i < t.size(); ++i){
//         for (int j = i; j < t[i].size(); ++j){
//             swap(t[i][j], t[j][i]);
//         }
//     } 

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// // поменять местами главную и побочную диагональ
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n; 
//     vector<vector<int> > t(n, vector<int> (n, 0));
//     for (int i = 0; i < n; ++i){
//         for (int j = 0; j < n; ++j){
//             cin >> t[i][j];
//         }
//     }

//     for (int i = 0; i < t.size(); ++i){
//         swap(t[i][i], t[n-1-i][i]);
//     } 

//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// мудрец ходит за золотом
// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m; 
//     vector<vector<int> > t(n, vector<int> (m, 0));
//     for (int i = 0; i < n; ++i){
//         for (int j = 0; j < m; ++j){
//             cin >> t[i][j];
//         }
//     }

//     int x, a, b, gold = 0;
//     cin >> x;
//     for (int i = 0; i < x; ++i){
//         cin >> a >> b;
//         gold += t[a-1][b-1];
//         t[a-1][b-1] = 0;
//     }

//     cout << gold;
    
//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int> > t(n, vector<int> (m));
//     int now = 0;
//     for (int i = 0; i < t.size(); ++i){ // количество строк таблицы — t.size()
//        if (i % 2 == 0){
//           for (int j = 0;j < t[i].size(); ++j){ //количество элементов на i-й строке — t[i].size()
//               t[i][j] = now;
//               ++now;
//           }
//        }
//        else{
//           for (int j = t[i].size() - 1;j >= 0; --j){
//               t[i][j] = now;
//               ++now;
//           }
//        }
//     }
//     for (int i = 0; i < t.size(); ++i){
//         for (int j = 0; j < t[i].size(); ++j){
//             cout << t[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, m, k;
//     cin >> n >> m; 
//     vector<vector<int> > t(n, vector<int> (m, 0));
//     // Считывание двумерного массива
//     for (int i = 0; i < n; ++i){
//         for (int j = 0; j < m; ++j){
//             cin >> t[i][j];
//         }
//     }
//     cin >> k;// Считывание количества подряд идущих мест

//     if (k > m) {
//         cout << 0;
//     }
//     else {
//         for (int i = 0; i < t.size(); ++i){
//             int count = 0;
//             for (int j = 0; j < t[i].size(); ++j){
//                 if (t[i][j] == 0){
//                     count++;
//                 }
//                 if (t[i][j] == 1){
//                     count = 0;
//                 }
//                 if (count >= k) {
//                     cout << (i + 1);
//                     return 0;
//                 }
//             }
//         }
//     }
    
//     cout << 0;
//     return 0;
// }

// n,m=map(int,input().split())
// # Считывание двумерного массива
// a=[]
// for i in range(n):
//   q=input().split()
//   a.append(q)
// # Считывание количества подряд идущих мест
// k=int(input())

// if k > m:
//   print(0)
// else:
//   for i in range(n):
//     flazhok = 0
//     skolko0 = 0
//     for j in range(m):
//       if a[i][j] == '0':
//         skolko0 += 1
//     if skolko0 >= k:
//       in_spisok = ''.join(a[i])
//       if k * '0' in in_spisok:
//         flazhok = 1
//         break
//   if flazhok == 1:
//     print(i+1)
//   else:
//     print(0)


// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n, m, k;
//     cin >> n >> m >> k;
//     vector<vector<int> > t(n + 2, vector<int> (m + 2, 0));
//     for (int i = 0; i < k; ++i){
//         int mi, mj;
//         cin >> mi >> mj;
//         t[mi][mj] = -1;
//     }
//     vector<int> di = {-1, -1, -1,  0, 0,  1, 1, 1};
//     vector<int> dj = {-1,  0,  1, -1, 1, -1, 0, 1};
//     for (int i = 1; i < t.size() - 1; ++i){
//         for (int j = 1; j < t[i].size() - 1; ++j){
//             if (t[i][j] == -1){
//                 for (int k = 0; k < 8; ++k){
//                     int ni = i + di[k];
//                     int nj = j + dj[k];
//                     if (t[ni][nj] != -1)
//                         ++t[ni][nj];
//                 }
//             }
//         }
//     }
//     for (int i = 1; i < t.size() - 1; ++i){
//         for (int j = 1; j < t[i].size() - 1; ++j){
//             if (t[i][j] == -1){
//                 cout << "*";
//             }
//             else if (t[i][j] == 0){
//                 cout << ".";
//             }
//             else{
//                 cout << t[i][j];
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main()
// {
//     string a;
//     getline(cin,a);
//     for(int i = 0; i < (a.length() - 1); ++i){
//         cout << a[i] << "*";
//     }
//     cout << a[a.length() - 1];
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a;
//     char base, crypto;
//     int k = 3;
//     getline(cin,a);
//     for(int i=0; i < a.length();++i){
//         if(isalpha(a[i])){
//             //применяем шифр цезаря
//             if (isupper(a[i])){
//                 base='A';
//             }else{
//                 base='a';
//             }
//             crypto =  (a[i]+k-base)%26+base;
//             cout << crypto;
//         }
//         else {
//             cout << a[i];
//         }
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string a, sign;
//     cin >> a;
//     int res = a[0] - 48;
//     for(int i=2; i < a.length();i+=2){
//         sign = a[i-1];
//         if (sign=="+"){
//             res+=a[i] - 48;
//         }else{
//             res-=a[i] - 48;
//         }
//         // cout << sign << " " << a[i] << " " << res << endl;
//     }
//     cout << res;
//     return 0;
// }

// найти максимальную подстроку в которой совпадает первый и последний символ
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string a, max_str, sub_str;
//     cin >> a;
//     for(int i=0; i < a.length(); ++i){
//         int j = (int)a.rfind(a[i]);
//         sub_str = a.substr(i, j-i+1);
//         if (max_str.length() < sub_str.length()) max_str = sub_str;
//     }
//     cout << max_str;
//     return 0;
// }


// проверка наличия подсроки в строке
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string s, ss;
//     getline(cin, s);
//     getline(cin, ss);
//     int i = s.find(ss);
//     if (i!=-1){
//         cout << "yes";
//     }else{
//         cout << "no";
//     }
//     return 0;
// }

// Заменить все 1 на one
// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string s;
//     getline(cin, s);
//     for (int i = 0; i < s.length(); ++i){
//         if (s[i] == '1') cout << "one";    
//         else cout << s[i];
//     }
    
//     return 0;
// }

// Счетчик слов в строке (пробелов строго 1 между словами и нет по краям)
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// int main()
// {
//    string s;
//    getline(cin, s);
//    int count = 1; 
//    vector<string> words(1, "");
//    for (auto c: s)
//    {
//        if (c == ' '){
//            words.push_back("");
//            count++;
//        } else{
//            words.back().push_back(c);
//        }
//    }
//    cout << count;
//    return 0;
// }


// удалить лишние пробелы
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s, res;
//     getline(cin, s);
//     vector<string> words(1, "");
//     res += s[0];
//     for (int i = 1; i < s.length(); ++i) {
//         if (s[i] == ' ' && s[i - 1] != ' ') {
//             res += s[i];
//         }
//         else if (s[i] != ' ') {
//             res += s[i];
//         }
//     }
//     if (res[0] != ' ' && res[res.length() -1] != ' ') cout << res;
//     else if (res[0] == ' ' && res[res.length() -1] == ' ') cout << res.substr(1, res.length() - 2);
//     else if (res[0] != ' ') cout << res.substr(0, res.length() - 2);
//     else if (res[res.length() -1] != ' ') cout << res.substr(1, res.length() - 1);
//     return 0;
// }

// проверить, что введеный символ - цифра
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     char a;
//     cin >> a;
//     if(47<int(a) && int(a)<58){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }
//     return 0;
    
// }

// изменить регистр буквы
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     char a;
//     cin >> a;
//     if((int) a>= (int)'a' && (int) a <= (int) 'z'){
//         cout << (char) ((int) 'A' + ((int) a - (int)'a'));
//     }else if((int) a>= (int)'A' && (int) a <= (int) 'Z'){
//          cout << (char) ((int) 'a' + ((int) a - (int)'A'));
//     }else{
//         cout << a;
//     }
//     return 0;

// }

// Есть ли символ в строке
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     char ch;
//     cin >> ch;
//     for (auto i: s){
//         if(i==ch){
//             cout << "YES";
//             return 0;
//         }
//     }
//     cout << "NO";
//     return 0;

// }

// Повторить символ ch n раз
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     char ch;
//     int n;
//     cin >> ch;
//     cin >> n;
//     for (int i=0;i<n;++i){
//         cout << ch;
//     }
    
//     return 0;

// }

// Посчитать сколько раз встречается цифра в строке
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s;
    
//     int count = 0;
//     getline(cin, s);
//     for (auto i: s) {
//         if ((int) i >= (int)'0' &&  (int) i <= (int)'9')
//             count++;
//     }
//     cout << count;
//     return 0;

// }

// вывести, что раньше будет стоять в словаре
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s1,s2,s3;
//     getline(cin, s1);
//     getline(cin, s2);
//     getline(cin, s3);
//     if(s1<=s2 && s1<=s3){
//     cout << s1;
//     }else if(s2<=s1 && s2<=s3){
//         cout << s2;
//     }else{
//         cout << s3;
//     }
    
//     return 0;

// }

// сколько строк одинаковы
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s1,s2,s3;
//     getline(cin, s1);
//     getline(cin, s2);
//     getline(cin, s3);
//     if(s1==s2 && s1==s3){
//     cout << 3;
//     }else if(s2==s1 || s2==s3 || s1==s3){
//         cout << 2;
//     }else{
//         cout << 0;
//     }

//     return 0;

// }

// найти индекс подстроки
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s1,s2;
//     getline(cin, s1);
//     getline(cin, s2);
//     cout << (int)s1.find(s2);
//     return 0;

// }

// Заменить все h на заглавные, кроме первого и последнего h
// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s, ss;
//     getline(cin, s);
//     if ((int)s.find('h') != -1){
//         int start = (int)s.find('h'), end = (int)s.rfind('h');
//         ss = s.substr(start + 1, end-start -1);
//         while ((int)ss.find('h') != -1){
//             ss.replace(ss.find('h'), 1, "H");
//         }
//         cout << s.substr(0, start+1) << ss << s.substr(end);
//     }
//     else cout << s;
//     return 0;

// }


// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;
// int main()
// {
//     string s;
//     getline(cin, s);
//     if ((int)s.find('h') != -1){
//         int start = (int)s.find('h'), end = (int)s.rfind('h');
//         cout << s.substr(0, start) << s.substr(end+1);
//     }
//     else cout << s;
//     return 0;
// }

// итератор и обратный итератор
// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector <int> el(n);
//     for (int i = 0; i < n; ++i){
//         cin >> el[i];
//     }
//     vector<int>::iterator i = el.begin();
//     while (i != el.end()){
//         cout << *i << ' ';
//         ++i;
//     }
//     cout << endl;
//     vector<int>::reverse_iterator j = el.rbegin();
//     while (j != el.rend()){
//         cout << *j << ' ';
//         ++j;
//     }
//     return 0;
// }

// легкая сортировка
// #include <iostream>
// #include <algorithm>
// #include <vector>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector <int> el(n);
//     for (int i = 0; i < n; ++i){
//         cin >> el[i];
//     }
//     // сортировка от меньшего к большему
//     sort(el.begin(), el.end());
//     for (int i = 0; i < n; ++i)
//         cout << el[i] << ' ';
//     cout << endl;
//     // сортировка от большего к меньшему
//     sort(el.rbegin(), el.rend());
//     for (int i = 0; i < n; ++i)
//         cout << el[i] << ' ';

//     return 0;

// }

// подходит и для списка слов, сортировка слов
// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>


// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector <string> el(n);
//     for (int i = 0; i < n; ++i){
//         cin >> el[i];
//     }
    
//     // сортировка от меньшего к большему
//     sort(el.begin(), el.end());
//     for (int i = 0; i < n; ++i)
//         cout << el[i] << ' ';
//     cout << endl;
//     // сортировка от большего к меньшему
//     sort(el.rbegin(), el.rend());
//     for (int i = 0; i < n; ++i)
//         cout << el[i] << ' ';

//     return 0;

// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>

// using namespace std;
// int maxi_2(int a, int b){
//   if (a>b) return a;
//   else return b;
// };

// int main(){
//   int a,b;
//   cin >> a;
//   cin >> b;
//   cout << maxi_2(a,b);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// long long power(int a, int b){
//     long long r = 1;
//     for(int i=1;i<=b;++i)
//       r*=a;
//     return r;
// };

// int main(){
//   int x, y;
//   cin >> x;
//   cin >> y;
//   cout << power(x, y);
//   return 0;
// }

// сумма чисел от a и b
// #include <iostream>
// using namespace std;
// int sum_ab(int a, int b){
//     int r = 0;
//     for(int i=a;i<=b;++i)
//       r+=i;
//     return r;
// }
// int main(){
//   int x, y;
//   cin >> x;
//   cin >> y;
//   cout << sum_ab(x, y);
//   return 0;
// }

// // среднее арифметическое
// #include <iostream>
// #include <vector>
// using namespace std;
// double average(int x, vector <int> a){
//     int r = 0;
//     for (auto i: a)
//       r+=i;
//     return (double)r / (double)x;
// }
// int main(){
//   int n;
//   cin >> n;
//   vector <int> s(n);
//   for (int i = 0; i < n; ++i)
//     cin >> s[i];
//   cout << average(n,s);
//   return 0;
// }

// серединка
// #include <iostream>
// #include <vector>
// using namespace std;
// int middle(int a, int b, int c){
//     if (a<=b && a >=c || a>=b && a<=c)
//       return a;
//     else  if(b<=a && b >=c || b>=a && b<=c)
//       return b;
//     else return c;
// }
// int main(){
//   int x, y, z;
//   cin >> x >> y >> z;
//   cout << middle(x, y, z);
//   return 0;
// }


// серединка с sort
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int middle(vector <int> a){
//     sort(a.begin(), a.end());
//     return a[1];
// }
// int main(){
//   vector <int> s(3);
//   for (int i = 0; i < 3; ++i)
//     cin >> s[i];
//   cout << middle(s);
//   return 0;
// }

// #include <iostream>
// #include <math.h>
// using namespace std;
// double geo_average(int a, int b){
//     double r = pow(a * b, 0.5);
//     return r;
// }
// int main(){
//   int x, y;
//   cin >> x >> y;
//   cout << geo_average(x, y);
//   return 0;
// }

// параллельное соединение резисторов
// #include <iostream>
// #include <math.h>
// using namespace std;
// double parallel_2(int r1, int r2){
//     return (double) (r1*r2)/(r1+r2);
// }
// int main(){
//   int x, y;
//   cin >> x >> y;
//   cout << parallel_2(x, y);
//   return 0;
// }

// параллельное соединение n резисторов
// #include <iostream>
// #include <math.h>
// #include <vector>
// using namespace std;
// double parallel_n(int n, vector <int> r){
//     double den = 0;
//     for (int i = 0; i < n; ++i){
//       den+=1.0/r[i];
//     }
//     return 1.0/den;
// }
// int main(){
//   int n;
//   cin >> n;
//   vector <int> r(n);
//   for (int i = 0; i < n; ++i)
//     cin >> r[i];
//   cout << parallel_n(n, r);
//   return 0;
// }

// параллельное соединение n резисторов с auto
// #include <iostream>
// #include <math.h>
// #include <vector>
// using namespace std;
// double parallel_n(int n, vector <int> r){
//     double den = 0;
//     for (auto i: r){
//       den+=1.0/i;
//     }
//     return 1.0/den;
// }
// int main(){
//   int n;
//   cin >> n;
//   vector <int> r(n);
//   for (int i = 0; i < n; ++i)
//     cin >> r[i];
//   cout << parallel_n(n, r);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int func(int a, int n){
//     int r = n % a; 
//     if (r == 0) 
//       return n - a;
//     else 
//       return n - r;
// }
// int main(){
//   int a, n;
//   cin >> n >> a;
//   cout << func(a, n);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int func(int a, int n){
//     int r = n % a; 
//     if (r == 0) 
//       return n + a;
//     else 
//       return n + (a - r);
// }
// int main(){
//   int a = 5, n;
//   cin >> n;
  
//   cout << func(a, n);
//   return 0;
// }

// шоколадки для Златы
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int choco(vector <int> box){
//   int r = *max_element(box.begin(), box.end());
//   for (int i=0; i<4;++i){
//     if (box[i]==r){
//       return i + 1;
//     }
//   }
//   return 0;
// }
// int main(){
//   vector <int> k(4);
//   for (int i = 0; i < 4; ++i)
//     cin >> k[i];
//   cout << choco(k);
//   return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;

// int sum_c(int a) {
//   int s=0;
//   while(a!=0){
//     if (a%10 > 0) 
//       s+=(a%10);
//     else
//       s-=(a%10);
//     a=a/10;
//   }
//   return s;
// }

// bool compare_c(int a, int b){
//   if (sum_c(a) == sum_c(b))
//     return a < b;
//   return sum_c(a) < sum_c(b);
// }

// int main(){
//   int n;
//   cin >> n;
//   vector <int> s(n);
//   for (int i = 0; i < n; ++i) {
//     cin >> s[i];

//   }
//   sort(s.begin(), s.end(), compare_c);
//   for (int i = 0; i < n; ++i)
//     cout << s[i] << " ";
  
// }


// произведение цифр!

// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;


//   int mult_c(int a) {
//     int s=1;
//     while(a!=0){
//       s*=(a%10);
//       a=a/10;
//     }
//     return s;
//   }

//   bool compare_c(int a, int b){
//     if (mult_c(a) == mult_c(b))
//       return a < b;
//     return mult_c(a) > mult_c(b);
//   }

//   int main(){
//     int n;
//     cin >> n;
//     vector <int> s(n);
//     for (int i = 0; i < n; ++i) {
//       cin >> s[i];
//     }
//     sort(s.begin(), s.end(), compare_c);
//     for (int i = 0; i < n; ++i)
//       cout << s[i] << " ";
//   }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <cstring>

// using namespace std;

// bool compare_letters(string& a, string& b){
//     string lower_a = a;
//     string lower_b = b;
//     transform(lower_a.begin(), lower_a.end(), lower_a.begin(), ::tolower);
//     transform(lower_b.begin(), lower_b.end(), lower_b.begin(), ::tolower);
//     return lower_a < lower_b;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector <string> el(n);
//     for (int i = 0; i < n; ++i){
//         cin >> el[i];
//     }

//     sort(el.begin(), el.end(), compare_letters);
//     for (int i = 0; i < n - 1; ++i)
//         cout << el[i] << ' ';
//     cout << el[n-1];
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <string>
// #include <cstring>
// using namespace std;

// const string VOWELLETTER = "aeiouy";

// bool compare_vowel_amount(string& a, string& b){
//   int count_a = 0, count_b = 0;
//   for (auto i: a){
//     if (VOWELLETTER.find(i) != string::npos)
//       ++count_a;
//     }
//   for (auto i: b){
//     if (VOWELLETTER.find(i) != string::npos)
//       ++count_b;
//     }
//   if (count_a != count_b)
//     return count_a > count_b;
//   if (a.length() != b.length())
//     return a.length() > b.length();
//   // string reversed_a = a, reversed_b = b;
//   // reverse(reversed_a.begin(), reversed_a.end());
//   // reverse(reversed_b.begin(), reversed_b.end());
//   // return reversed_a < reversed_b;
//   return a>b;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector <string> el(n);
//     for (int i = 0; i < n; ++i){
//         cin >> el[i];
//     }

//     sort(el.begin(), el.end(), compare_vowel_amount);

//     for (int i = 0; i < (n - 1); ++i)
//         cout << el[i] << ' ';
//     cout << el[n-1];
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <set>

// using namespace std;

// int main()
// {
//   // объявление пустого множества
//   set <int> my_set;
//   // добавление элементов
//   my_set.insert(1);
//   my_set.insert(2);
//   my_set.insert(3);
//   my_set.insert(2);  // элемент 2 не добавится, так как он уже есть в множестве

//   // удаление элементов
//   my_set.erase(2);

//   // получение размера
//   cout << my_set.size() << endl;

//   // вывод множества на экран
//   for (auto i: my_set)
//     cout << i << ' ';

  
//   два множества для примера
//   set <int> my_set1 = {1, 2, 3, 4, 5};
//   set <int> my_set2 = {4, 5, 6, 7, 8};

//   // пересечение двух множеств
//   // контейнер для сохранения результата
//   set <int> intersection;
//   set_intersection - функция для нахождения пересечения двух множеств
//   set_intersection(my_set1.begin(), my_set1.end(), my_set2.begin(), my_set2.end(), inserter(intersection, intersection.begin()));  // set_intersection(указатель на начало первого множества, указатель на конец первого множества, указатель на начало второго множества, указатель на конец второго множества, inserter(название контейнера (то есть пустого множества для результата), указатель на начало множества для результата))

//   вывод полученного пересечения
//   for(auto i: intersection)
//     cout << i << " ";

  
//   // объединение двух множеств
//   // контейнер для сохранения результата
//   set <int> union_set;
//   // set_union - функция для объединения двух множеств
//   set_union(my_set1.begin(), my_set1.end(), my_set2.begin(), my_set2.end(), inserter(union_set, union_set.begin()));

//   // вывод полученного объединения
//   for(auto i: union_set)
//     cout << i << " ";

  
//   // разность двух множеств
//   // контейнер для сохранения результата
//   set <int> difference;
//   // set_difference - функция для разности двух множеств
//   set_difference(my_set1.begin(), my_set1.end(), my_set2.begin(), my_set2.end(), inserter(difference, difference.begin()));

//   // вывод полученного объединения
//   for(auto i: difference)
//     cout << i << " ";


//   // Симметрическая разность двух множеств
//   // контейнер для сохранения результата
//   set <int> symmetric_difference;
//   // set_symmetric_difference - функция для симметрической разности двух множеств
//   set_symmetric_difference(my_set1.begin(), my_set1.end(), my_set2.begin(), my_set2.end(), inserter(symmetric_difference, symmetric_difference.begin()));

//   // вывод полученного объединения
//   for(auto i: symmetric_difference)
//     cout << i << " ";
  
//   return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <set>

// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   set<int>my_set;
//   for(int i=0;i<n;++i){
//     int s;
//     cin >> s;
//     my_set.insert(s);
  
//   }
//   cout << my_set.size();
//   return 0;
// }

// #include <iostream>
// #include <algorithm>
// #include <string>
// #include <set>

// using namespace std;

// int main(){
//   set<string>my_set;
//   string s, word = "";
//   getline(cin,s);
//   for(auto i: s){
//     if(i != ' ') word+=i;
//     else if (word != ""){
//       my_set.insert(word);
//       word="";
//     }
//   }
//   my_set.insert(word);
//   cout << my_set.size();
// }

#include <iostream>
#include <algorithm>
#include <string>
#include <set>

using namespace std;

int main(){
  set<string>my_set1, my_set2;
  string s1, s2, genom;
  getline(cin,s1);
  getline(cin,s2);
  genom = s1[0];
  for (int i = 1; i < s1.length(); ++i){
    genom += s1[i];
    my_set1.insert(genom);
    genom = s1[i];
  }
  genom = s2[0];
  for (int i = 1; i < s2.length(); ++i){
    genom += s2[i];
    my_set2.insert(genom);
    genom = s2[i];
  }

  for (auto i: my_set1)
    cout << i << " ";
  cout << endl;
  for (auto i: my_set2)
    cout << i << " ";
  cout << endl;
  set <string> intersection;
  set_intersection(my_set1.begin(), my_set1.end(), my_set2.begin(), my_set2.end(), inserter(intersection, intersection.begin()));  
  int count = 0;
  for (auto i: intersection)
    if (s1.count(i) == 1 and s2.count(i) == 1)
      
  cout << endl;
  
  cout << intersection.size();
}