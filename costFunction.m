function [J, grad] = costFunction(theta, X, y)
%COSTFUNCTION Compute cost and gradient for logistic regression
%   J = COSTFUNCTION(theta, X, y) computes the cost of using theta as the
%   parameter for logistic regression and the gradient of the cost
%   w.r.t. to the parameters.

% Initialize some useful values
m = length(y); % number of training examples

grad=[1;1;1;1;1;1];

h = sigmoid(X * theta);
J = -(1 / m) * sum( (y .* log(h)) + ((1 - y) .* log(1 - h)) );

for i = 1 : size(theta, 1)
    grad(i) = (1 / m) * sum( (h - y) .* X(:, i) );
end

end