// Start Token Validator

/*
 * Token validator can parse expressions and either return the evaluated problem,
 * or return the evaluated expression.
 *
 *
 * EG
 *
 * 1 + 2 = 3
 *
 * Evaluated problem:
 *
 * true
 *
 * Evaluated Expression
 *
 * {INT} + {INT} = {EXPR}
 */
#include <cctype>

namespace std {
    namespace parsers {
        namespace validator {
            bool valid_if_num_is_valid(const std::string& expr) {

                    bool f = std::stoi(expr);

                    return f;

            }
            std::string exprconst(std::string expr) {
                for (int i = 0; i < expr.size(); ++i) {
                    if (isdigit(expr[i])) {
                        expr[i] = '{';
                        expr.push_back('I');
                        expr.push_back('N');
                        expr.push_back('T');
                        expr.push_back('}');
                    }
                    else {
                        expr[i] = '{';
                        expr.push_back('S');
                        expr.push_back('T');
                        expr.push_back('R');
                        expr.push_back('}');
                    }
                }
            }
        }
    }
}