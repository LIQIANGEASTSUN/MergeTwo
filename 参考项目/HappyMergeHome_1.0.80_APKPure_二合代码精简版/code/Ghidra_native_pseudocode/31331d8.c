
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_031431d8(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_031435b0 + 0x31431f4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031435b4 + 0x3143208));
    func_0x01438628(*(undefined4 *)(_UNK_031435b8 + 0x3143214));
    func_0x01438628(*(undefined4 *)(_UNK_031435bc + 0x3143220));
    func_0x01438628(*(undefined4 *)(_UNK_031435c0 + 0x314322c));
    func_0x01438628(*(undefined4 *)(_UNK_031435c4 + 0x3143238));
    func_0x01438628(*(undefined4 *)(_UNK_031435c8 + 0x3143244));
    func_0x01438628(*(undefined4 *)(_UNK_031435cc + 0x3143250));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x79cf,0);
  if (iVar1 == 0) {
    iVar1 = func_0x03147488(param_1,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(param_2 + 0x30);
      iVar1 = func_0x03146010(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 != *(int *)(iVar1 + 0xc)) {
        iVar5 = *(int *)(param_2 + 0x30);
        iVar1 = func_0x03146010(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (iVar5 != *(int *)(iVar1 + 0x14)) {
          return 0;
        }
      }
      iVar1 = func_0x031457fc(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)(param_2 + 0x2c);
      if (*(int *)(iVar1 + 0x68) < *piVar6) {
        iVar1 = func_0x031457fc(param_1);
        iVar5 = *piVar6;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x026f139c(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_031435d0 + 0x3143380) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(piVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x291,uVar2,0,0,0,0);
      }
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031435d4 + 0x31433fc));
      func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_031435d8 + 0x3143410));
      iVar1 = func_0x03146c90(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x046ce3e4(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_031435dc + 0x3143448));
      iVar1 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = 0;
          piVar6 = *(int **)(_UNK_031435e0 + 0x3143484);
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
            uVar2 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_031435e4 + 0x31434dc));
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_031435e8 + 0x3143518));
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
                  func_0x04cd29cc(iVar5,uVar2,
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
    iVar1 = func_0x029540a4(0x79cf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar5;
}

