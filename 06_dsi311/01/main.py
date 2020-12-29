import numpy as np 
import math 
 
data = np.loadtxt('iris.data', delimiter=',', usecols=(0,1)) 
target = np.loadtxt('iris.data', delimiter=',', usecols=(4), dtype='str') 
 
 
def get_data_stat(data, target): 
    """  
    Compute mu and sigma of each class  
    Input:  data = N-D array of data, each row is the instance, each column is the attribute. 
            target = 1-D array indicating the class of each row in data 
    Output: mu = 2-D array of mean value of each class and each attribute 
            sigma = 2-D array of std of each class and each attribute 
    """ 
    classes = np.unique(target) 
    mu = [] 
    sigma = [] 
    for c in classes: 
        mu.append(data[target==c].mean(axis=0)) 
        sigma.append(data[target==c].std(axis=0)) 
    return np.array(mu), np.array(sigma) 
 
 
def normaldist(x, mu, sigma, eps=1e-15): 
    """  
    Compute probability following the normal distribution 
    Input:  x = 1-D array feature vector of an instance. 
            mu = 2-D array of mean value of each class and each attribute 
            sigma = 2-D array of std of each class and each attribute 
    Output: the probability of x following the normal distribution 
    """ 
    denom = 1 / ( sigma * math.sqrt(2*math.pi) + eps ) 
    return denom * math.exp(-0.5*((x - mu) / (sigma + eps))**2) 
 
 
def get_prior(data, target): 
    """  
    Compute the prior probability 
    Input:  data = N-D array of data, each row is the instance, each column is the attribute. 
            target = 1-D array indicating the class of each row in data 
    Output: prior = 1-D array of prior probability of each class 
    """ 
    pass 
 
 
def get_likelihood(sample, mu, sigma): 
    """  
    Compute the likelihood probability 
    Input:  sample = 1-D array feature vector of an instance. 
            mu = 2-D array of mean value of each class and each attribute 
            sigma = 2-D array of std of each class and each attribute 
    Output: likelihood = 1-D array of likelihood probability of the instance being in each class 
    """ 
    pass 
 
 
if __name__ == "__main__": 
    # compute the required stats 
    mu, sigma = get_data_stat(data, target) 
    prior = get_prior(data, target) 
    classes = np.unique(target) 
     
    print(mu, sigma) 
 
    # read the samples that we want to predict from console 
    n = int(input()) 
    samples = np.zeros((n,2)) 
    for i in range(n): 
        b = input() 
        samples[i] = [float(j) for j in b.split()] 
 
    # make the prediction using naive bayes, and print class name on console 
    for x in samples: 
        likelihood = get_likelihood(x, mu, sigma) 
        idx = np.argmax(likelihood * prior) 
        print(classes[idx])