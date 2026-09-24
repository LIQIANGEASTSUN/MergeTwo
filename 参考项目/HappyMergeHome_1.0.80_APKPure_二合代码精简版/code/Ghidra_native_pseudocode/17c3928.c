
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017d3928(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iStack_28;
  
  pcVar4 = (char *)(_UNK_017d3cb0 + 0x17d3944);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d3cb4 + 0x17d3958));
    func_0x01438628(*(undefined4 *)(_UNK_017d3cb8 + 0x17d3964));
    func_0x01438628(*(undefined4 *)(_UNK_017d3cbc + 0x17d3970));
    func_0x01438628(*(undefined4 *)(_UNK_017d3cc0 + 0x17d397c));
    func_0x01438628(*(undefined4 *)(_UNK_017d3cc4 + 0x17d3988));
    func_0x01438628(*(undefined4 *)(_UNK_017d3cc8 + 0x17d3994));
    func_0x01438628(*(undefined4 *)(_UNK_017d3ccc + 0x17d39a0));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x8f89,0);
  if (iVar1 == 0) {
    iVar1 = func_0x017d5bc8(param_1,0);
    if (iVar1 != 0) {
      iVar1 = func_0x017d48ec(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x8c);
      if (param_2 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)(param_2 + 0x2c);
      if (iVar1 < *piVar6) {
        iVar1 = func_0x017d48ec(param_1);
        iVar5 = *piVar6;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026edb88(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_017d3cd0 + 0x17d3a80) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(piVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x21e,uVar2,0,0,0,0);
      }
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_017d3cd4 + 0x17d3afc));
      func_0x024f0510(iVar5,**(undefined4 **)(_UNK_017d3cd8 + 0x17d3b10));
      iVar1 = func_0x017d57e0(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x024f064c(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_017d3cdc + 0x17d3b48));
      iVar1 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = 0;
          piVar6 = *(int **)(_UNK_017d3ce0 + 0x17d3b84);
          while( true ) {
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar7 = iStack_28;
            if (*(int *)(iVar3 + 0xc) <= iVar1) break;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar7 + 0x10);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            uVar2 = func_0x024f0530(iVar3,iVar1,**(undefined4 **)(_UNK_017d3ce4 + 0x17d3bdc));
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x024f0530(iVar3,iVar1,**(undefined4 **)(_UNK_017d3ce8 + 0x17d3c18));
            if (0 < iVar3) {
              do {
                if (iVar5 == 0) {
                  func_0x014388e4();
                }
                iVar7 = *(int *)(iVar5 + 8);
                uVar8 = *(uint *)(iVar5 + 0xc);
                iVar9 = *piVar6;
                *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
                if (iVar7 == 0) {
                  func_0x014388e4();
                }
                if (uVar8 < *(uint *)(iVar7 + 0xc)) {
                  *(uint *)(iVar5 + 0xc) = uVar8 + 1;
                  *(undefined4 *)(iVar7 + uVar8 * 4 + 0x10) = uVar2;
                }
                else {
                  func_0x024f0520(iVar5,uVar2,
                                  *(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38));
                }
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
            iVar1 = iVar1 + 1;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x8f89,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar5;
}

