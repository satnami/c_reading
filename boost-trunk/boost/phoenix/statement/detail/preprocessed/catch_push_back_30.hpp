/*==============================================================================
    Copyright (c) 2005-2010 Joel de Guzman
    Copyright (c) 2010 Thomas Heller

    Distributed under the Boost Software License, Version 1.0. (See accompanying
    file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 2>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 2>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 3>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 3>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 4>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 4>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 5>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 5>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 6>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 6>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 7>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 7>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 8>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 8>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 9>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 9>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 10>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 10>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 11>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 11>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 12>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 12>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 13>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 13>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 14>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 14>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 15>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 15>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 16>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 16>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 17>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 17>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 18>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 18>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 19>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 19>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 20>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 20>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 21>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 21>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 22>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 22>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 23>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 23>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 24>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 24>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 25>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 25>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 26>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 26>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 27>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 27>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 28>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type , typename proto::result_of::child_c<TryCatch, 27>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch) , proto::child_c<27>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 28>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type , typename proto::result_of::child_c<TryCatch, 27>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch) , proto::child_c<27>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 29>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type , typename proto::result_of::child_c<TryCatch, 27>::type , typename proto::result_of::child_c<TryCatch, 28>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch) , proto::child_c<27>(try_catch) , proto::child_c<28>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 29>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type , typename proto::result_of::child_c<TryCatch, 27>::type , typename proto::result_of::child_c<TryCatch, 28>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch) , proto::child_c<27>(try_catch) , proto::child_c<28>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
    
    
    
    
    
    
        template <typename TryCatch, typename Exception, typename Expr>
        struct catch_push_back<TryCatch, Exception, Expr, 30>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_
                  , default_domain_with_basic_expr
                  , catch_exception<Exception>
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type , typename proto::result_of::child_c<TryCatch, 27>::type , typename proto::result_of::child_c<TryCatch, 28>::type , typename proto::result_of::child_c<TryCatch, 29>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch) , proto::child_c<27>(try_catch) , proto::child_c<28>(try_catch) , proto::child_c<29>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_
                          , default_domain_with_basic_expr
                        >(catch_exception<Exception>(), catch_)
                    );
            }
        };
        
        template <typename TryCatch, typename Expr>
        struct catch_all_push_back<TryCatch, Expr, 30>
        {
            typedef
                typename proto::result_of::make_expr<
                    phoenix::tag::catch_all
                  , default_domain_with_basic_expr
                  , Expr
                >::type
                catch_expr;
            typedef phoenix::expression::try_catch<
                typename proto::result_of::child_c<TryCatch, 0>::type , typename proto::result_of::child_c<TryCatch, 1>::type , typename proto::result_of::child_c<TryCatch, 2>::type , typename proto::result_of::child_c<TryCatch, 3>::type , typename proto::result_of::child_c<TryCatch, 4>::type , typename proto::result_of::child_c<TryCatch, 5>::type , typename proto::result_of::child_c<TryCatch, 6>::type , typename proto::result_of::child_c<TryCatch, 7>::type , typename proto::result_of::child_c<TryCatch, 8>::type , typename proto::result_of::child_c<TryCatch, 9>::type , typename proto::result_of::child_c<TryCatch, 10>::type , typename proto::result_of::child_c<TryCatch, 11>::type , typename proto::result_of::child_c<TryCatch, 12>::type , typename proto::result_of::child_c<TryCatch, 13>::type , typename proto::result_of::child_c<TryCatch, 14>::type , typename proto::result_of::child_c<TryCatch, 15>::type , typename proto::result_of::child_c<TryCatch, 16>::type , typename proto::result_of::child_c<TryCatch, 17>::type , typename proto::result_of::child_c<TryCatch, 18>::type , typename proto::result_of::child_c<TryCatch, 19>::type , typename proto::result_of::child_c<TryCatch, 20>::type , typename proto::result_of::child_c<TryCatch, 21>::type , typename proto::result_of::child_c<TryCatch, 22>::type , typename proto::result_of::child_c<TryCatch, 23>::type , typename proto::result_of::child_c<TryCatch, 24>::type , typename proto::result_of::child_c<TryCatch, 25>::type , typename proto::result_of::child_c<TryCatch, 26>::type , typename proto::result_of::child_c<TryCatch, 27>::type , typename proto::result_of::child_c<TryCatch, 28>::type , typename proto::result_of::child_c<TryCatch, 29>::type
              , catch_expr> gen_type;
            typedef typename gen_type::type type;
            static type
            make(
                TryCatch const& try_catch
              , Expr const& catch_
            )
            {
                return
                    gen_type::make(
                        proto::child_c<0>(try_catch) , proto::child_c<1>(try_catch) , proto::child_c<2>(try_catch) , proto::child_c<3>(try_catch) , proto::child_c<4>(try_catch) , proto::child_c<5>(try_catch) , proto::child_c<6>(try_catch) , proto::child_c<7>(try_catch) , proto::child_c<8>(try_catch) , proto::child_c<9>(try_catch) , proto::child_c<10>(try_catch) , proto::child_c<11>(try_catch) , proto::child_c<12>(try_catch) , proto::child_c<13>(try_catch) , proto::child_c<14>(try_catch) , proto::child_c<15>(try_catch) , proto::child_c<16>(try_catch) , proto::child_c<17>(try_catch) , proto::child_c<18>(try_catch) , proto::child_c<19>(try_catch) , proto::child_c<20>(try_catch) , proto::child_c<21>(try_catch) , proto::child_c<22>(try_catch) , proto::child_c<23>(try_catch) , proto::child_c<24>(try_catch) , proto::child_c<25>(try_catch) , proto::child_c<26>(try_catch) , proto::child_c<27>(try_catch) , proto::child_c<28>(try_catch) , proto::child_c<29>(try_catch)
                      , proto::make_expr<
                            phoenix::tag::catch_all
                          , default_domain_with_basic_expr
                        >(catch_)
                    );
            }
        };
    
