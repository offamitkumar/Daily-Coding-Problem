//
// Created by Amit Kumar on 25/03/23.
//

class Node {
private:
    Node*left = nullptr;
    Node*right = nullptr;
    bool isLeftEvaluated = false;
    bool isRightEvaluated = false;
public:
    Node() = default;
    Node* getLeft() {
      if (!isLeftEvaluated) {
        left = new Node();
        isLeftEvaluated = true;
      }
      return left;
    }

    Node* getRight() {
      if (!isRightEvaluated) {
        right = new Node();
        isRightEvaluated = true;
      }
      return right;
    }
};

Node* generate() { // will generate the binary tree in O(1)
  return new Node();
}