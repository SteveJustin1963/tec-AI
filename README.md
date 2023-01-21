# tec-AI
- using MINT code
- tec-Brain, code to decode pulses
- tec-mmR, memristor cct/code
- combine with https://openai.com/blog/introducing-text-and-code-embeddings/


## loops `think1.c`
- This code uses a for loop to iterate from 1 to 10 and calculates the sum of cubes and sum of squares of these numbers in each iteration. 
- It declares two variables, sum_of_cubes and sum_of_squares, and initializes them to 0. 
- In each iteration, the current value of i is cubed and added to sum_of_cubes, and i squared and added to sum_of_squares. 
- The for loop is initialized with i = 1, the loop will continue as long as i is less than or equal to 10 and i is incremented by 1 at the end of each iteration.
- After the loop finishes executing, the code prints the final value of sum_of_cubes and sum_of_squares using printf, which is the standard C library function for printing to the console.
- The "return 0" statement at the end of the main function indicates that the program has run successfully.


## Variance: `var`.c`
This code demonstrates a simple AI-related functionality, which is the calculation of variance. Variance is a measure of the spread between numbers in a data set, it's a statistical tool used in AI and machine learning to understand the distribution of data.
- The program prompts the user to enter the number of elements, and then for each element, it prompts the user to enter a value. 
- It then uses these values to calculate the variance of the data set. 
- It uses two loops, one to calculate the mean of the elements and another to calculate the variance using the mean value.
- It uses the standard C library function scanf() to get the inputs from the user, and the math library function pow() to perform the power operation.
- It's a simple example of how AI can be incorporated into a program, but there are many more complex and sophisticated ways to implement AI functionality.



## Classification: `class1.c`
This is the process of assigning a label or category to a data point based on its features or attributes. For example, an AI model that classifies images of animals as either "cat" or "dog" is using classification. example of C code that demonstrates a simple classification task using a decision tree: code prompts the user to enter an age and a gender and then uses a decision tree to classify the input into one of three classes: A, B, or C.
- It starts by asking the user to enter the age and gender through scanf function 
- then it uses if-else statements to check the age, 
- if age is less than 18 it assigns class 'C' to it, 
- if the gender is 'M' assigns class 'A' to it and the last else statement assigns class 'B' to it.
- Finally, it prints the class on the screen using printf function.

It's a simple example of how a decision tree can be used for classification. In a real-world scenario, the decision tree would be more complex and would involve many more features and decision points. note that this is a simple example and in real-world scenarios decision tree models are implemented using machine learning libraries, not with simple if-else statement. Such libraries like scikit-learn in python, caret in R and etc.




## Clustering: `clust1.c`
This is the process of grouping similar data points together. For example, an AI model that groups customers based on their purchasing habits is using clustering. example of C code that demonstrates a simple clustering task using the k-means algorithm, this time I'll use a different approach: This code defines a function kMeans that takes in the number of data points (n), the number of clusters (k), the data points and the centroids as input.
- It initializes the cluster assignments randomly using the rand() function. 
- Then, it performs k-means clustering using a for loop that iterates MAX_ITERATIONS times. 
- Inside the loop, it updates the centroids by taking the mean of all the points that belong to that cluster, and assigns each data point to the closest centroid.
- It prints the final cluster assignments for each data point.
- It's a simple example of how k-means clustering can be implemented in C. 
- In a real-world scenario, the data set would be more complex and the number of data points and clusters would be much larger.

It's important to note that this is a simple example, and in real-world scenarios k-means models are implemented using machine learning libraries, not with simple mathematical formulas.


## Regression: `reg1.c`
This is the process of predicting a continuous value based on a set of input features. For example, an AI model that predicts the price of a house based on its square footage, number of bedrooms, and location is using regression. example of C code that demonstrates a simple linear regression task:
- it prompts the user to enter the x and y values.
- It then uses these values to calculate the slope (b) and y-intercept (a) of the line of best fit. 
- It uses a for loop to iterate over each data point, summing the x and y values, the product of x and y, and the square of x. 
- After the loop, it calculates the slope and y-intercept using the formulas:
```
b = (nsumxy - sumxsumy)/(nsumx2 - sumxsumx)
a = (sumy - b*sumx)/n

where sumx, sumy, sumxy, sumx2 are the sum of x, sum of y, sum of x*y and sum of x^2 respectively.
```
- Finally, it prints the equation of the line using the slope and y-intercept values.

It's a simple example of how linear regression can be implemented, but in real-world scenarios, regression models are implemented using machine learning libraries, not with simple mathematical formulas.
This code is a simple linear regression implementation, it's important to note that there are other types of regression like polynomial, logistic, and non-linear regression that can be applied on different data sets.



## Neural Networks: `neural1.c`
A neural network is a type of machine learning model that is inspired by the structure and function of the human brain. It's a set of algorithms that is designed to recognize patterns in data. It's a powerful tool for tasks like image recognition, speech recognition, and natural language processing.
Decision Trees: This is a tree-like model of decisions and their possible consequences. It's a simple and interpretable model that can be used for both classification and regression tasks. Creating a neural network from scratch using C programming language can be a complex task and it's not recommended to do it unless you have a deep understanding of the underlying principles of neural networks and the C programming language.
However, there are several libraries such as fann (Fast Artificial Neural Network Library) written in C, that can be used to create, train, and test neural networks.
Here is an example of C code that demonstrates a simple feedforward neural network using the FANN library: This code creates a simple feedforward neural network using the FANN library, the neural network consists of 2 input neurons, 1 output neuron and 3 hidden neurons, 
- it uses sigmoid activation function for the hidden and output layers, 
- it trains the network using a file called "xor.data" which should contain the training data set, 
- it set the maximum number of epochs to 500000 and the number of epochs between reports to 1000, 
- it saves the trained network in a file called "xor_float.net" and 
- finally it destroys the network.

It's important to note that this is a simple example of how to use the FANN library, in real-world scenarios, the neural network architecture and the training parameters would be more complex and would depend on the specific problem you are trying to solve.
It's also important to note that FANN library is not supported anymore, it is suggested to use other libraries such as Tensorflow or PyTorch which are more powerful and has more features.




## Random Forest: `randfor1.c`
it's an ensemble learning method for classification, regression and other tasks, that operate by constructing a multitude of decision trees at training time and outputting the class that is the mode of the classes (classification) or mean prediction (regression) of the individual trees.
K-Means: This is an unsupervised machine learning algorithm that groups similar data points together. It's a popular technique for tasks like image segmentation and anomaly detection.  there are several libraries such as libforest (Random Forest Library) written in C, that can be used to create and train random forests.
Here is an example of C code that demonstrates how to use the libforest library to train a random forest on a dataset: code demonstrates how to use the libforest library to create and train a random forest regressor. It first defines the number of samples, features, and trees to be used in the random forest. Then it creates the data matrix X and target vector y, and fills them with data.
- It creates a random forest regressor using the libforest_create_regressor function, passing the number of trees as a parameter.
- Then it trains the random forest using the libforest_fit function, passing the data matrix X, target vector y, number of samples, and number of features.
- After that, it uses the libforest_predict function to make predictions on the input data X, and the returned predictions are stored in the y_pred variable.
- It is important to note that the size of y_pred is equal to the number of samples in the input dataset.
- Finally, it frees the allocated memory and destroys the random forest using the libforest_destroy function.

It's important to note that this is a simple example of how to use the libforest library, in real-world scenarios, the data set would be more complex and the number of trees, samples, and features would be much larger.
It's also important to note that libforest is not a widely used library, and it is not actively maintained, it's suggested to use other libraries such as scikit-learn or XGBoost which are more powerful and have more features.




## Support Vector Machines (SVMs): `svm1.c`
This is a type of supervised machine learning algorithm that is used for classification and regression tasks. It's a powerful technique for tasks like text classification, image classification, and bioinformatics. there are several libraries such as LIBSVM (Library for Support Vector Machines) written in C, that can be used to create and train SVMs. Here is an example of C code that demonstrates how to use the LIBSVM library to train a SVM on a dataset: This code demonstrates how to use the LIBSVM library to create and train a SVM. It first defines the number of samples, features, and allocates memory for the data matrix X and target vector y, and fills them with data.
- It creates a SVM problem using the svm_problem struct, filling in the number of samples, target vector, and data matrix. Then it creates a svm_parameter struct and sets the parameters such as svm_type, kernel_type, and others. The kernel type is set to RBF (Radial Basis Function) and svm_type is set to C_SVC (C-Support Vector Classification)
- It trains the SVM using the svm_train function and passing the svm_problem and svm_parameter as input.
- After that, it uses the svm_predict function to make predictions on the input data X, and the returned predictions are stored in the y_pred variable.
- Finally, it frees the allocated memory and destroys the model using the svm_free_and_destroy_model function.

It's important to note that this is a simple example of how to use the LIBSVM library, in real-world scenarios, the data set would be more complex and the number of samples, features, and parameters would be much larger.
It's also important to note that there are other libraries such as LIBLINEAR and SHOGUN that provide more advanced functionalities and support for different types of SVMs.



## Gradient Boosting: `gb1.c`
it's a machine learning technique for regression and classification problems, which produces a prediction model in the form of an ensemble of weak prediction models, typically decision trees. Creating a Gradient Boosting algorithm from scratch using C programming language can be a complex task and it's not recommended to do it unless you have a deep understanding of the underlying principles of Gradient Boosting and the C programming language.
However, there are several libraries such as XGBoost (eXtreme Gradient Boosting) written in C++, that can be used to create and train gradient boosting models. XGBoost can also be used in C++ via its C-API.
Here is an example of C code that demonstrates how to use the XGBoost library to train a gradient boosting model on a dataset: This code demonstrates how to use the XGBoost library to create and train a gradient boosting model. It first defines the number of samples, features, and the number of trees to be used in the model. Then it creates the data matrix X and target vector y, and fills them with data.
- It creates a DMatrixHandle handle using the XGDMatrixCreateFromMat function, and sets the label vector y with the XGDMatrixSetFloatInfo function.
- Then it creates a BoosterHandle handle using the XGBoosterCreate function, passing the DMatrixHandle handle as input.
- It sets the parameters such as objective, eval_metric, eta, max_depth, subsample, colsample_bytree, and num_round using the XGBoosterSetParam function.
- It then updates the model using the XGBoosterUpdateOneIter function, passing the BoosterHandle, iteration number, and the DMatrixHandle as input.
- After that, it uses the XGBoosterPredict function to make predictions on the input data X, and the returned predictions are stored in the f variable.
- Finally, it frees the allocated memory and destroys the model using the XGDMatrixFree, XGBoosterFree functions respectively.

It's important to note that this is a simple example of how to use the XGBoost library, in real-world scenarios, the data set would be more complex and the number of samples, features, and parameters would be much larger.
It's also important to note that XGBoost is one of the most widely used library for gradient boosting, it is actively developed and maintained, it's known for its high performance and ability to handle large datasets.



## Principal Component Analysis (PCA): `pca1.c`
it's a statistical procedure that uses an orthogonal transformation to convert a set of observations of possibly correlated variables into a set of values of linearly uncorrelated variables called principal components. Creating a Principal Component Analysis (PCA) algorithm from scratch using C programming language can be a complex task and it's not recommended to do it unless you have a deep understanding of the underlying principles of PCA and the C programming language.
However, there are several libraries such as Armadillo, Eigen that can be used to perform PCA.
Here is an example of C++ code that demonstrates how to use the Armadillo library to perform PCA on a dataset: This code demonstrates how to use the Armadillo library to perform PCA on a dataset. It first defines the number of samples, features, and creates the data matrix X, then fills them with data.
- It then centers the data by subtracting the mean of each feature.
- It computes the covariance matrix of the centered data using the cov() function.
- It then performs the eigenvalue decomposition of the covariance matrix using eig_sym() function and stores the eigenvalues and eigenvectors in eigval and eigvec.
It then selects the top two principal components by selecting the last two columns of eigenvectors and constructs the PCA data by multiplying centered data with those two eigenvectors.
- Finally, it uses the PCA data for further processing.

It's important to note that this is a simple example of how to use the Armadillo library to perform PCA, in real-world scenarios, the data set would be more complex and the number of samples, features, and parameters would be much larger. and there are other libraries such as Eigen that also provide PCA functionality. 

