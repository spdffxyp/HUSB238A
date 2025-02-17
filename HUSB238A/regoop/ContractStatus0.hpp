#ifndef CONTRACTSTATUS0_HPP
#define CONTRACTSTATUS0_HPP

namespace husb238a {
    class ContractStatus0 final : public Register {
    public:
        RegisterAddress get_addr() override {
            return CONTRACT_STATUS0;
        }

        uint8_t get_pd_contract() const {
            return get_bits(field::PD_CONTRACT);
        }

        uint8_t get_dpm_contract() const {
            return get_bits(field::DPM_CONTRACT);
        }
    };

} // husb238a

#endif //CONTRACTSTATUS0_HPP
