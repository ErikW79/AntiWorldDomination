#include <iostream>
#include <string>
#include <vector>

// Genesis block definition
class GenesisBlock {
public:
    std::string hash;
    std::string prevHash;
    std::string merkleRoot;
    uint32_t timestamp;
    uint32_t nonce;

    GenesisBlock() {
        hash = "0000000000awdxgenesisblock";
        prevHash = "000000000000000000000000";
        merkleRoot = "merkle_root_placeholder";
        timestamp = 1700000000; // Replace with the actual timestamp
        nonce = 0;
    }

    void display() {
        std::cout << "Genesis Block Info:" << std::endl;
        std::cout << "Hash: " << hash << std::endl;
        std::cout << "Previous Hash: " << prevHash << std::endl;
        std::cout << "Merkle Root: " << merkleRoot << std::endl;
        std::cout << "Timestamp: " << timestamp << std::endl;
        std::cout << "Nonce: " << nonce << std::endl;
    }
};

int main() {
    GenesisBlock genesis;
    genesis.display();
    return 0;
}
