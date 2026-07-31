class Solution {
public:
    // Допоміжна функція для рекурсивного обходу
    void traverse(TreeNode* node, vector<int>& result) {
        // Якщо вузол порожній, просто повертаємося назад (виходимо з рекурсії)
        if (node == nullptr) {
            return;
        }
        
        // 1. Спочатку йдемо до кінця вліво
        traverse(node->left, result);
        
        // 2. Додаємо значення поточного вузла у наш вектор
        result.push_back(node->val);
        
        // 3. Потім йдемо вправо
        traverse(node->right, result);
    }
    
    // Основна функція, яку викликає LeetCode
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; // Створюємо вектор для збереження відповіді
        
        // Запускаємо обхід, передаючи корінь та наш вектор
        traverse(root, result);
        
        // ПОВЕРТАЄМО результат (саме цього `return` вам не вистачало)
        return result; 
    }
};