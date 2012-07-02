// automatically generated by wrap
#include <wrap/matlab.h>
#include <Point3.h>
using namespace geometry;
typedef boost::shared_ptr<Point3> Shared;

static std::set<Shared*> collector;

void cleanup(void) {
  BOOST_FOREACH(Shared* p, collector)
    collector.erase(p);
}
void mexFunction(int nargout, mxArray *out[], int nargin, const mxArray *in[])
{
  mexAtExit(cleanup);

  const mxArray* input = in[0];
  Shared* self = *(Shared**) mxGetData(input);

  if(self) {
    if(nargin > 1) {
      collector.insert(self);
    }
    else if(collector.erase(self))
      delete self;
  } else {
    int nc = unwrap<int>(in[1]);

    if(nc == 0) {
  double x = unwrap< double >(in[2]);
  double y = unwrap< double >(in[3]);
  double z = unwrap< double >(in[4]);
      self = new Shared(new Point3(x,y,z));
    }
    collector.insert(self);
    out[0] = mxCreateNumericMatrix(1, 1, mxUINT32OR64_CLASS, mxREAL);
    *reinterpret_cast<Shared**> (mxGetPr(out[0])) = self;
  }
}
