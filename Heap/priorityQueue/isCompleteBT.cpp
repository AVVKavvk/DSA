bool isCompleteBT(Node* root) {
    queue<Node*> q;
    q.push(root);
    bool flag = false;

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            flag = true;
        } else {
            if (flag == true) {
                return false;
            }
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return true;
}