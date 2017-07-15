#ifndef COMPLEXE_H
#define COMPLEXE_H


class Complexe
{
    public:
        /** Default constructor */
        Complexe(int p_reel, int p_im);
        /** Default destructor */
        virtual ~Complexe();

    protected:

    private:
        int p_reel; //!< Member variable "p_reel"
        int p_im; //!< Member variable "p_im"
};

#endif // COMPLEXE_H
