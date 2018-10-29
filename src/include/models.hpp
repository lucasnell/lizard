/*
    lizard is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    lizard is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with lizard.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.18.0

#include <stan/model/model_header.hpp>

namespace model_fit_ts_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_fit_ts");
    reader.add_event(58, 56, "end", "model_fit_ts");
    return reader;
}

class model_fit_ts : public prob_grad {
private:
    int n_ts;
    vector<int> n_per;
    int n_obs;
    vector<double> pop_obs;
    vector<double> x;
    double sig_obs;
    vector<double> beta_prior;
    vector<double> logit_rho_prior;
    vector<double> sig_proc_prior;
    vector<double> pop_prior;
public:
    model_fit_ts(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    model_fit_ts(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model_fit_ts_namespace::model_fit_ts";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        // initialize member variables
        try {
            context__.validate_dims("data initialization", "n_ts", "int", context__.to_vec());
            n_ts = int(0);
            vals_i__ = context__.vals_i("n_ts");
            pos__ = 0;
            n_ts = vals_i__[pos__++];
            validate_non_negative_index("n_per", "n_ts", n_ts);
            context__.validate_dims("data initialization", "n_per", "int", context__.to_vec(n_ts));
            validate_non_negative_index("n_per", "n_ts", n_ts);
            n_per = std::vector<int>(n_ts,int(0));
            vals_i__ = context__.vals_i("n_per");
            pos__ = 0;
            size_t n_per_limit_0__ = n_ts;
            for (size_t i_0__ = 0; i_0__ < n_per_limit_0__; ++i_0__) {
                n_per[i_0__] = vals_i__[pos__++];
            }
            context__.validate_dims("data initialization", "n_obs", "int", context__.to_vec());
            n_obs = int(0);
            vals_i__ = context__.vals_i("n_obs");
            pos__ = 0;
            n_obs = vals_i__[pos__++];
            validate_non_negative_index("pop_obs", "n_obs", n_obs);
            context__.validate_dims("data initialization", "pop_obs", "double", context__.to_vec(n_obs));
            validate_non_negative_index("pop_obs", "n_obs", n_obs);
            pop_obs = std::vector<double>(n_obs,double(0));
            vals_r__ = context__.vals_r("pop_obs");
            pos__ = 0;
            size_t pop_obs_limit_0__ = n_obs;
            for (size_t i_0__ = 0; i_0__ < pop_obs_limit_0__; ++i_0__) {
                pop_obs[i_0__] = vals_r__[pos__++];
            }
            validate_non_negative_index("x", "n_obs", n_obs);
            context__.validate_dims("data initialization", "x", "double", context__.to_vec(n_obs));
            validate_non_negative_index("x", "n_obs", n_obs);
            x = std::vector<double>(n_obs,double(0));
            vals_r__ = context__.vals_r("x");
            pos__ = 0;
            size_t x_limit_0__ = n_obs;
            for (size_t i_0__ = 0; i_0__ < x_limit_0__; ++i_0__) {
                x[i_0__] = vals_r__[pos__++];
            }
            context__.validate_dims("data initialization", "sig_obs", "double", context__.to_vec());
            sig_obs = double(0);
            vals_r__ = context__.vals_r("sig_obs");
            pos__ = 0;
            sig_obs = vals_r__[pos__++];
            validate_non_negative_index("beta_prior", "2", 2);
            context__.validate_dims("data initialization", "beta_prior", "double", context__.to_vec(2));
            validate_non_negative_index("beta_prior", "2", 2);
            beta_prior = std::vector<double>(2,double(0));
            vals_r__ = context__.vals_r("beta_prior");
            pos__ = 0;
            size_t beta_prior_limit_0__ = 2;
            for (size_t i_0__ = 0; i_0__ < beta_prior_limit_0__; ++i_0__) {
                beta_prior[i_0__] = vals_r__[pos__++];
            }
            validate_non_negative_index("logit_rho_prior", "2", 2);
            context__.validate_dims("data initialization", "logit_rho_prior", "double", context__.to_vec(2));
            validate_non_negative_index("logit_rho_prior", "2", 2);
            logit_rho_prior = std::vector<double>(2,double(0));
            vals_r__ = context__.vals_r("logit_rho_prior");
            pos__ = 0;
            size_t logit_rho_prior_limit_0__ = 2;
            for (size_t i_0__ = 0; i_0__ < logit_rho_prior_limit_0__; ++i_0__) {
                logit_rho_prior[i_0__] = vals_r__[pos__++];
            }
            validate_non_negative_index("sig_proc_prior", "2", 2);
            context__.validate_dims("data initialization", "sig_proc_prior", "double", context__.to_vec(2));
            validate_non_negative_index("sig_proc_prior", "2", 2);
            sig_proc_prior = std::vector<double>(2,double(0));
            vals_r__ = context__.vals_r("sig_proc_prior");
            pos__ = 0;
            size_t sig_proc_prior_limit_0__ = 2;
            for (size_t i_0__ = 0; i_0__ < sig_proc_prior_limit_0__; ++i_0__) {
                sig_proc_prior[i_0__] = vals_r__[pos__++];
            }
            validate_non_negative_index("pop_prior", "2", 2);
            context__.validate_dims("data initialization", "pop_prior", "double", context__.to_vec(2));
            validate_non_negative_index("pop_prior", "2", 2);
            pop_prior = std::vector<double>(2,double(0));
            vals_r__ = context__.vals_r("pop_prior");
            pos__ = 0;
            size_t pop_prior_limit_0__ = 2;
            for (size_t i_0__ = 0; i_0__ < pop_prior_limit_0__; ++i_0__) {
                pop_prior[i_0__] = vals_r__[pos__++];
            }

            // validate, data variables
            // initialize data variables


            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            validate_non_negative_index("beta", "n_ts", n_ts);
            num_params_r__ += n_ts;
            validate_non_negative_index("logit_rho", "n_ts", n_ts);
            num_params_r__ += n_ts;
            ++num_params_r__;
            validate_non_negative_index("pop_init", "n_ts", n_ts);
            num_params_r__ += n_ts;
            validate_non_negative_index("z_proc", "(n_obs - n_ts)", (n_obs - n_ts));
            num_params_r__ += (n_obs - n_ts);
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model_fit_ts() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        stan::io::writer<double> writer__(params_r__,params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        if (!(context__.contains_r("beta")))
            throw std::runtime_error("variable beta missing");
        vals_r__ = context__.vals_r("beta");
        pos__ = 0U;
        validate_non_negative_index("beta", "n_ts", n_ts);
        context__.validate_dims("initialization", "beta", "double", context__.to_vec(n_ts));
        std::vector<double> beta(n_ts,double(0));
        for (int i0__ = 0U; i0__ < n_ts; ++i0__)
            beta[i0__] = vals_r__[pos__++];
        for (int i0__ = 0U; i0__ < n_ts; ++i0__)
            try {
            writer__.scalar_unconstrain(beta[i0__]);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable beta: ") + e.what());
        }

        if (!(context__.contains_r("logit_rho")))
            throw std::runtime_error("variable logit_rho missing");
        vals_r__ = context__.vals_r("logit_rho");
        pos__ = 0U;
        validate_non_negative_index("logit_rho", "n_ts", n_ts);
        context__.validate_dims("initialization", "logit_rho", "double", context__.to_vec(n_ts));
        std::vector<double> logit_rho(n_ts,double(0));
        for (int i0__ = 0U; i0__ < n_ts; ++i0__)
            logit_rho[i0__] = vals_r__[pos__++];
        for (int i0__ = 0U; i0__ < n_ts; ++i0__)
            try {
            writer__.scalar_unconstrain(logit_rho[i0__]);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable logit_rho: ") + e.what());
        }

        if (!(context__.contains_r("sig_proc")))
            throw std::runtime_error("variable sig_proc missing");
        vals_r__ = context__.vals_r("sig_proc");
        pos__ = 0U;
        context__.validate_dims("initialization", "sig_proc", "double", context__.to_vec());
        double sig_proc(0);
        sig_proc = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(sig_proc);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sig_proc: ") + e.what());
        }

        if (!(context__.contains_r("pop_init")))
            throw std::runtime_error("variable pop_init missing");
        vals_r__ = context__.vals_r("pop_init");
        pos__ = 0U;
        validate_non_negative_index("pop_init", "n_ts", n_ts);
        context__.validate_dims("initialization", "pop_init", "double", context__.to_vec(n_ts));
        std::vector<double> pop_init(n_ts,double(0));
        for (int i0__ = 0U; i0__ < n_ts; ++i0__)
            pop_init[i0__] = vals_r__[pos__++];
        for (int i0__ = 0U; i0__ < n_ts; ++i0__)
            try {
            writer__.scalar_unconstrain(pop_init[i0__]);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable pop_init: ") + e.what());
        }

        if (!(context__.contains_r("z_proc")))
            throw std::runtime_error("variable z_proc missing");
        vals_r__ = context__.vals_r("z_proc");
        pos__ = 0U;
        validate_non_negative_index("z_proc", "(n_obs - n_ts)", (n_obs - n_ts));
        context__.validate_dims("initialization", "z_proc", "double", context__.to_vec((n_obs - n_ts)));
        std::vector<double> z_proc((n_obs - n_ts),double(0));
        for (int i0__ = 0U; i0__ < (n_obs - n_ts); ++i0__)
            z_proc[i0__] = vals_r__[pos__++];
        for (int i0__ = 0U; i0__ < (n_obs - n_ts); ++i0__)
            try {
            writer__.scalar_unconstrain(z_proc[i0__]);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable z_proc: ") + e.what());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(vector<T__>& params_r__,
                 vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;

        try {
            // model parameters
            stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);

            vector<local_scalar_t__> beta;
            size_t dim_beta_0__ = n_ts;
            beta.reserve(dim_beta_0__);
            for (size_t k_0__ = 0; k_0__ < dim_beta_0__; ++k_0__) {
                if (jacobian__)
                    beta.push_back(in__.scalar_constrain(lp__));
                else
                    beta.push_back(in__.scalar_constrain());
            }

            vector<local_scalar_t__> logit_rho;
            size_t dim_logit_rho_0__ = n_ts;
            logit_rho.reserve(dim_logit_rho_0__);
            for (size_t k_0__ = 0; k_0__ < dim_logit_rho_0__; ++k_0__) {
                if (jacobian__)
                    logit_rho.push_back(in__.scalar_constrain(lp__));
                else
                    logit_rho.push_back(in__.scalar_constrain());
            }

            local_scalar_t__ sig_proc;
            (void) sig_proc;  // dummy to suppress unused var warning
            if (jacobian__)
                sig_proc = in__.scalar_constrain(lp__);
            else
                sig_proc = in__.scalar_constrain();

            vector<local_scalar_t__> pop_init;
            size_t dim_pop_init_0__ = n_ts;
            pop_init.reserve(dim_pop_init_0__);
            for (size_t k_0__ = 0; k_0__ < dim_pop_init_0__; ++k_0__) {
                if (jacobian__)
                    pop_init.push_back(in__.scalar_constrain(lp__));
                else
                    pop_init.push_back(in__.scalar_constrain());
            }

            vector<local_scalar_t__> z_proc;
            size_t dim_z_proc_0__ = (n_obs - n_ts);
            z_proc.reserve(dim_z_proc_0__);
            for (size_t k_0__ = 0; k_0__ < dim_z_proc_0__; ++k_0__) {
                if (jacobian__)
                    z_proc.push_back(in__.scalar_constrain(lp__));
                else
                    z_proc.push_back(in__.scalar_constrain());
            }


            // transformed parameters
            validate_non_negative_index("rho", "n_ts", n_ts);
            vector<local_scalar_t__> rho(n_ts);
            stan::math::initialize(rho, DUMMY_VAR__);
            stan::math::fill(rho,DUMMY_VAR__);
            validate_non_negative_index("pop", "n_obs", n_obs);
            vector<local_scalar_t__> pop(n_obs);
            stan::math::initialize(pop, DUMMY_VAR__);
            stan::math::fill(pop,DUMMY_VAR__);


            {
            int pos(0);
            (void) pos;  // dummy to suppress unused var warning

            stan::math::fill(pos, std::numeric_limits<int>::min());
            stan::math::assign(pos,1);


            for (int i = 1; i <= n_ts; ++i) {

                stan::model::assign(rho, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            (stan::math::exp(get_base1(logit_rho,i,"logit_rho",1)) / (stan::math::exp(get_base1(logit_rho,i,"logit_rho",1)) + 1)), 
                            "assigning variable rho");
                stan::model::assign(pop, 
                            stan::model::cons_list(stan::model::index_uni(pos), stan::model::nil_index_list()), 
                            get_base1(pop_init,i,"pop_init",1), 
                            "assigning variable pop");
                for (int t = (pos + 1); t <= ((pos + get_base1(n_per,n_ts,"n_per",1)) - 1); ++t) {
                    {
                    local_scalar_t__ pop_t0;
                    (void) pop_t0;  // dummy to suppress unused var warning

                    stan::math::initialize(pop_t0, DUMMY_VAR__);
                    stan::math::fill(pop_t0,DUMMY_VAR__);
                    stan::math::assign(pop_t0,get_base1(pop,(t - 1),"pop",1));


                    stan::model::assign(pop, 
                                stan::model::cons_list(stan::model::index_uni(t), stan::model::nil_index_list()), 
                                (((get_base1(beta,i,"beta",1) * get_base1(x,t,"x",1)) + (get_base1(rho,i,"rho",1) * (pop_t0 - (get_base1(beta,i,"beta",1) * get_base1(x,(t - 1),"x",1))))) + (sig_proc * get_base1(z_proc,(t - (i - 1)),"z_proc",1))), 
                                "assigning variable pop");
                    }
                }
                stan::math::assign(pos, (pos + get_base1(n_per,i,"n_per",1)));
            }
            }

            // validate transformed parameters
            for (int i0__ = 0; i0__ < n_ts; ++i0__) {
                if (stan::math::is_uninitialized(rho[i0__])) {
                    std::stringstream msg__;
                    msg__ << "Undefined transformed parameter: rho" << '[' << i0__ << ']';
                    throw std::runtime_error(msg__.str());
                }
            }
            for (int i0__ = 0; i0__ < n_obs; ++i0__) {
                if (stan::math::is_uninitialized(pop[i0__])) {
                    std::stringstream msg__;
                    msg__ << "Undefined transformed parameter: pop" << '[' << i0__ << ']';
                    throw std::runtime_error(msg__.str());
                }
            }

            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            // model body

            lp_accum__.add(normal_log<propto__>(beta, get_base1(beta_prior,1,"beta_prior",1), get_base1(beta_prior,2,"beta_prior",1)));
            lp_accum__.add(normal_log<propto__>(logit_rho, get_base1(logit_rho_prior,1,"logit_rho_prior",1), get_base1(logit_rho_prior,2,"logit_rho_prior",1)));
            lp_accum__.add(normal_log<propto__>(sig_proc, get_base1(sig_proc_prior,1,"sig_proc_prior",1), get_base1(sig_proc_prior,2,"sig_proc_prior",1)));
            lp_accum__.add(normal_log<propto__>(pop_init, get_base1(pop_prior,1,"pop_prior",1), get_base1(pop_prior,2,"pop_prior",1)));
            lp_accum__.add(normal_log<propto__>(z_proc, 0, 1));
            lp_accum__.add(normal_log<propto__>(pop_obs, pop, sig_obs));

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("beta");
        names__.push_back("logit_rho");
        names__.push_back("sig_proc");
        names__.push_back("pop_init");
        names__.push_back("z_proc");
        names__.push_back("rho");
        names__.push_back("pop");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dims__.push_back(n_ts);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(n_ts);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(n_ts);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back((n_obs - n_ts));
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(n_ts);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(n_obs);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);
        static const char* function__ = "model_fit_ts_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        vector<double> beta;
        size_t dim_beta_0__ = n_ts;
        for (size_t k_0__ = 0; k_0__ < dim_beta_0__; ++k_0__) {
            beta.push_back(in__.scalar_constrain());
        }
        vector<double> logit_rho;
        size_t dim_logit_rho_0__ = n_ts;
        for (size_t k_0__ = 0; k_0__ < dim_logit_rho_0__; ++k_0__) {
            logit_rho.push_back(in__.scalar_constrain());
        }
        double sig_proc = in__.scalar_constrain();
        vector<double> pop_init;
        size_t dim_pop_init_0__ = n_ts;
        for (size_t k_0__ = 0; k_0__ < dim_pop_init_0__; ++k_0__) {
            pop_init.push_back(in__.scalar_constrain());
        }
        vector<double> z_proc;
        size_t dim_z_proc_0__ = (n_obs - n_ts);
        for (size_t k_0__ = 0; k_0__ < dim_z_proc_0__; ++k_0__) {
            z_proc.push_back(in__.scalar_constrain());
        }
            for (int k_0__ = 0; k_0__ < n_ts; ++k_0__) {
            vars__.push_back(beta[k_0__]);
            }
            for (int k_0__ = 0; k_0__ < n_ts; ++k_0__) {
            vars__.push_back(logit_rho[k_0__]);
            }
        vars__.push_back(sig_proc);
            for (int k_0__ = 0; k_0__ < n_ts; ++k_0__) {
            vars__.push_back(pop_init[k_0__]);
            }
            for (int k_0__ = 0; k_0__ < (n_obs - n_ts); ++k_0__) {
            vars__.push_back(z_proc[k_0__]);
            }

        // declare and define transformed parameters
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {
            validate_non_negative_index("rho", "n_ts", n_ts);
            vector<local_scalar_t__> rho(n_ts);
            stan::math::initialize(rho, DUMMY_VAR__);
            stan::math::fill(rho,DUMMY_VAR__);
            validate_non_negative_index("pop", "n_obs", n_obs);
            vector<local_scalar_t__> pop(n_obs);
            stan::math::initialize(pop, DUMMY_VAR__);
            stan::math::fill(pop,DUMMY_VAR__);


            {
            int pos(0);
            (void) pos;  // dummy to suppress unused var warning

            stan::math::fill(pos, std::numeric_limits<int>::min());
            stan::math::assign(pos,1);


            for (int i = 1; i <= n_ts; ++i) {

                stan::model::assign(rho, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            (stan::math::exp(get_base1(logit_rho,i,"logit_rho",1)) / (stan::math::exp(get_base1(logit_rho,i,"logit_rho",1)) + 1)), 
                            "assigning variable rho");
                stan::model::assign(pop, 
                            stan::model::cons_list(stan::model::index_uni(pos), stan::model::nil_index_list()), 
                            get_base1(pop_init,i,"pop_init",1), 
                            "assigning variable pop");
                for (int t = (pos + 1); t <= ((pos + get_base1(n_per,n_ts,"n_per",1)) - 1); ++t) {
                    {
                    local_scalar_t__ pop_t0;
                    (void) pop_t0;  // dummy to suppress unused var warning

                    stan::math::initialize(pop_t0, DUMMY_VAR__);
                    stan::math::fill(pop_t0,DUMMY_VAR__);
                    stan::math::assign(pop_t0,get_base1(pop,(t - 1),"pop",1));


                    stan::model::assign(pop, 
                                stan::model::cons_list(stan::model::index_uni(t), stan::model::nil_index_list()), 
                                (((get_base1(beta,i,"beta",1) * get_base1(x,t,"x",1)) + (get_base1(rho,i,"rho",1) * (pop_t0 - (get_base1(beta,i,"beta",1) * get_base1(x,(t - 1),"x",1))))) + (sig_proc * get_base1(z_proc,(t - (i - 1)),"z_proc",1))), 
                                "assigning variable pop");
                    }
                }
                stan::math::assign(pos, (pos + get_base1(n_per,i,"n_per",1)));
            }
            }

            // validate transformed parameters

            // write transformed parameters
            if (include_tparams__) {
            for (int k_0__ = 0; k_0__ < n_ts; ++k_0__) {
            vars__.push_back(rho[k_0__]);
            }
            for (int k_0__ = 0; k_0__ < n_obs; ++k_0__) {
            vars__.push_back(pop[k_0__]);
            }
            }
            if (!include_gqs__) return;
            // declare and define generated quantities



            // validate generated quantities

            // write generated quantities
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng,params_r_vec,params_i_vec,vars_vec,include_tparams,include_gqs,pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_fit_ts";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "beta" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "logit_rho" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        param_name_stream__.str(std::string());
        param_name_stream__ << "sig_proc";
        param_names__.push_back(param_name_stream__.str());
        for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "pop_init" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        for (int k_0__ = 1; k_0__ <= (n_obs - n_ts); ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "z_proc" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "rho" << '.' << k_0__;
                param_names__.push_back(param_name_stream__.str());
            }
            for (int k_0__ = 1; k_0__ <= n_obs; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "pop" << '.' << k_0__;
                param_names__.push_back(param_name_stream__.str());
            }
        }


        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "beta" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "logit_rho" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        param_name_stream__.str(std::string());
        param_name_stream__ << "sig_proc";
        param_names__.push_back(param_name_stream__.str());
        for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "pop_init" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
        for (int k_0__ = 1; k_0__ <= (n_obs - n_ts); ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "z_proc" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            for (int k_0__ = 1; k_0__ <= n_ts; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "rho" << '.' << k_0__;
                param_names__.push_back(param_name_stream__.str());
            }
            for (int k_0__ = 1; k_0__ <= n_obs; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "pop" << '.' << k_0__;
                param_names__.push_back(param_name_stream__.str());
            }
        }


        if (!include_gqs__) return;
    }

}; // model

}




#endif
