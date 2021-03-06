/* $TOG: sharedlib.c /main/10 1998/02/06 15:44:59 kaleb $ */

/*

Copyright 1991, 1998  The Open Group

All Rights Reserved.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/Xmu/sharedlib.c,v 3.2 2000/11/28 18:50:10 dawes Exp $ */

#if defined(SUNSHLIB) && !defined(SHAREDCODE)

#include "Atoms.h"

struct _AtomRec {
    char *name;
    struct _DisplayRec* head;
};

#if (defined(__STDC__) && !defined(UNIXCPP)) || defined(ANSICPP)
#define DeclareAtom(atom) \
extern struct _AtomRec __##atom; \
AtomPtr _##atom = &__##atom;
#else
#define DeclareAtom(atom) \
extern struct _AtomRec __/**/atom; \
AtomPtr _/**/atom = &__/**/atom;
#endif

DeclareAtom(XA_ATOM_PAIR)
DeclareAtom(XA_CHARACTER_POSITION)
DeclareAtom(XA_CLASS)
DeclareAtom(XA_CLIENT_WINDOW)
DeclareAtom(XA_CLIPBOARD)
DeclareAtom(XA_COMPOUND_TEXT)
DeclareAtom(XA_DECNET_ADDRESS)
DeclareAtom(XA_DELETE)
DeclareAtom(XA_FILENAME)
DeclareAtom(XA_HOSTNAME)
DeclareAtom(XA_IP_ADDRESS)
DeclareAtom(XA_LENGTH)
DeclareAtom(XA_LIST_LENGTH)
DeclareAtom(XA_NAME)
DeclareAtom(XA_NET_ADDRESS)
DeclareAtom(XA_NULL)
DeclareAtom(XA_OWNER_OS)
DeclareAtom(XA_SPAN)
DeclareAtom(XA_TARGETS)
DeclareAtom(XA_TEXT)
DeclareAtom(XA_TIMESTAMP)
DeclareAtom(XA_USER)
DeclareAtom(XA_UTF8_STRING)

#endif /* SUNSHLIB */
