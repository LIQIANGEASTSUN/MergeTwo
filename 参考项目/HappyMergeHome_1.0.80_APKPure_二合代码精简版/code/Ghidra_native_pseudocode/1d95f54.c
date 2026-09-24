
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01da5f54(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_01da62b0 + 0x1da5f70);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01da62b4 + 0x1da5f84));
    func_0x01438628(*(undefined4 *)(_UNK_01da62b8 + 0x1da5f90));
    func_0x01438628(*(undefined4 *)(_UNK_01da62bc + 0x1da5f9c));
    func_0x01438628(*(undefined4 *)(_UNK_01da62c0 + 0x1da5fa8));
    func_0x01438628(*(undefined4 *)(_UNK_01da62c4 + 0x1da5fb4));
    func_0x01438628(*(undefined4 *)(_UNK_01da62c8 + 0x1da5fc0));
    func_0x01438628(*(undefined4 *)(_UNK_01da62cc + 0x1da5fcc));
    *pcVar3 = '\x01';
  }
  iVar4 = 0;
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x3ec8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01da858c(param_1,0);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(param_2 + 0x30);
      iVar1 = func_0x01da7580(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (iVar5 == *(int *)(iVar1 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_01da62d0 + 0x1da607c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x0202346c(0);
        uVar2 = func_0x01524ffc((undefined4 *)(param_2 + 0x2c),0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x020257a4(iVar1,0x204,uVar2,0,0,0,0);
        iVar4 = func_0x014388d4(**(undefined4 **)(_UNK_01da62d4 + 0x1da60fc));
        func_0x024f0510(iVar4,**(undefined4 **)(_UNK_01da62d8 + 0x1da6110));
        iVar1 = func_0x01da7d94(param_1);
        uVar2 = *(undefined4 *)(param_2 + 0x2c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x024f064c(iVar1,uVar2,&iStack_28,**(undefined4 **)(_UNK_01da62dc + 0x1da6148))
        ;
        iVar1 = iStack_28;
        if (iVar5 != 0) {
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar1 + 0x10) != 0) {
            iVar1 = 0;
            piVar9 = *(int **)(_UNK_01da62e0 + 0x1da6184);
            while( true ) {
              iVar5 = iStack_28;
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar6 = iStack_28;
              if (*(int *)(iVar5 + 0xc) <= iVar1) break;
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar6 + 0x10);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              uVar2 = func_0x024f0530(iVar5,iVar1,**(undefined4 **)(_UNK_01da62e4 + 0x1da61dc));
              iVar5 = iStack_28;
              if (iStack_28 == 0) {
                func_0x014388e4();
              }
              iVar5 = *(int *)(iVar5 + 0x14);
              if (iVar5 == 0) {
                func_0x014388e4();
              }
              iVar5 = func_0x024f0530(iVar5,iVar1,**(undefined4 **)(_UNK_01da62e8 + 0x1da6218));
              if (0 < iVar5) {
                do {
                  if (iVar4 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar4 + 8);
                  uVar7 = *(uint *)(iVar4 + 0xc);
                  iVar8 = *piVar9;
                  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar7 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(iVar4 + 0xc) = uVar7 + 1;
                    *(undefined4 *)(iVar6 + uVar7 * 4 + 0x10) = uVar2;
                  }
                  else {
                    func_0x024f0520(iVar4,uVar2,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
              }
              iVar1 = iVar1 + 1;
            }
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x3ec8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x0289549c(iVar1,param_1,param_2,0);
  }
  return iVar4;
}

