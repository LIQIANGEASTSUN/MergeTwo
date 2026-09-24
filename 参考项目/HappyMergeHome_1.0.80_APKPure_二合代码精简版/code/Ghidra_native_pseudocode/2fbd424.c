
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02fcd424(undefined4 param_1,int param_2)

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
  
  pcVar4 = (char *)(_UNK_02fcd7fc + 0x2fcd440);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fcd800 + 0x2fcd454));
    func_0x01438628(*(undefined4 *)(_UNK_02fcd804 + 0x2fcd460));
    func_0x01438628(*(undefined4 *)(_UNK_02fcd808 + 0x2fcd46c));
    func_0x01438628(*(undefined4 *)(_UNK_02fcd80c + 0x2fcd478));
    func_0x01438628(*(undefined4 *)(_UNK_02fcd810 + 0x2fcd484));
    func_0x01438628(*(undefined4 *)(_UNK_02fcd814 + 0x2fcd490));
    func_0x01438628(*(undefined4 *)(_UNK_02fcd818 + 0x2fcd49c));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x70ba,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02fd18c4(param_1,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(param_2 + 0x30);
      iVar1 = func_0x02fd044c(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 != *(int *)(iVar1 + 0xc)) {
        iVar5 = *(int *)(param_2 + 0x30);
        iVar1 = func_0x02fd044c(param_1);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (iVar5 != *(int *)(iVar1 + 0x14)) {
          return 0;
        }
      }
      iVar1 = func_0x02fcfc38(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar6 = (int *)(param_2 + 0x2c);
      if (*(int *)(iVar1 + 0x68) < *piVar6) {
        iVar1 = func_0x02fcfc38(param_1);
        iVar5 = *piVar6;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        FUN_026cf4ec(iVar1,iVar5,0);
        if (*(int *)(**(int **)(_UNK_02fcd81c + 0x2fcd5cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc(piVar6,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x313,uVar2,0,0,0,0);
      }
      iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fcd820 + 0x2fcd648));
      func_0x04cd2124(iVar5,**(undefined4 **)(_UNK_02fcd824 + 0x2fcd65c));
      iVar1 = func_0x02fd10cc(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x046ce3e4(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_02fcd828 + 0x2fcd694));
      iVar1 = iStack_28;
      if (iVar3 != 0) {
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar1 + 0x10) != 0) {
          iVar1 = 0;
          piVar6 = *(int **)(_UNK_02fcd82c + 0x2fcd6d0);
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
            uVar2 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_02fcd830 + 0x2fcd728));
            iVar3 = iStack_28;
            if (iStack_28 == 0) {
              func_0x014388e4();
            }
            iVar3 = *(int *)(iVar3 + 0x14);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x04cd26d0(iVar3,iVar1,**(undefined4 **)(_UNK_02fcd834 + 0x2fcd764));
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
    iVar1 = func_0x029540a4(0x70ba,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar5 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar5;
}

