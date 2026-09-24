
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bab014(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_02bab420 + 0x2bab02c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bab424 + 0x2bab040));
    func_0x01438628(*(undefined4 *)(_UNK_02bab428 + 0x2bab04c));
    func_0x01438628(*(undefined4 *)(_UNK_02bab42c + 0x2bab058));
    func_0x01438628(*(undefined4 *)(_UNK_02bab430 + 0x2bab064));
    func_0x01438628(*(undefined4 *)(_UNK_02bab434 + 0x2bab070));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cb4,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cb4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_30 = 0.0;
    func_0x024f56c0(&fStack_48,0,0);
    fStack_30 = fStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&fStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&fStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x024f56d0(iVar6,uVar9,&fStack_30,uVar4,0,0);
    return;
  }
  piVar8 = *(int **)(_UNK_02bab438 + 0x2bab0cc);
  iVar1 = **(int **)(*piVar8 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    piVar5 = *(int **)(_UNK_02bab43c + 0x2bab0f8);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) == '\0') {
      return;
    }
    iVar6 = **(int **)(*piVar8 + 0x5c);
    if (iVar6 == 0) {
      func_0x014388e4();
      iVar1 = *piVar5;
    }
    iVar3 = *(int *)(iVar1 + 0x74);
    *(undefined1 *)(iVar6 + 0x2d) = 0;
    if (iVar3 == 0) {
      func_0x014387a4();
      iVar1 = *piVar5;
    }
    *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4) = 0;
  }
  iVar1 = func_0x01c8a72c(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01c8b95c(iVar1,0);
  if (iVar1 != 0) {
    iVar1 = **(int **)(*piVar8 + 0x5c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02b63a9c(iVar1,0xa29,0,0);
    if (iVar1 == 0) {
      piVar5 = *(int **)(_UNK_02bab440 + 0x2bab1c8);
      iVar1 = **(int **)(*piVar5 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x02d0620c(iVar1,0);
      piVar11 = *(int **)(_UNK_02bab444 + 0x2bab1f8);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x024ef144(iVar1,0,0);
      if (iVar6 != 0) {
        iVar6 = **(int **)(*piVar8 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
          piVar2 = (int *)func_0x02ce3124(0,0);
          func_0x014388e4();
        }
        else {
          piVar2 = (int *)func_0x02ce3124(iVar1,0);
        }
        uStack_38 = func_0x02ce3124(iVar1,0);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        piVar10 = (int *)0x0;
        if ((piVar2 != (int *)0x0) &&
           (piVar10 = piVar2, *piVar2 != **(int **)(_UNK_02bab448 + 0x2bab294))) {
          piVar10 = (int *)0x0;
        }
        uStack_3c = 1;
        uStack_34 = 0;
        uStack_40 = 0;
        func_0x02b63f30(iVar6,0xa29,piVar10,0);
        iVar6 = **(int **)(*piVar8 + 0x5c);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uStack_40 = 0;
        iVar6 = func_0x02b6127c(iVar6,0xa29,0,0);
        if (iVar6 != 0) {
          uVar9 = **(undefined4 **)(*piVar5 + 0x5c);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar6 = func_0x024ef144(uVar9,0,0);
          if (iVar6 != 0) {
            iVar6 = **(int **)(*piVar5 + 0x5c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uVar9 = func_0x02d06f88(iVar6,0);
            if (*(int *)(*piVar11 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar6 = func_0x024ef144(uVar9,0,0);
            if (iVar6 != 0) {
              iVar6 = **(int **)(*piVar5 + 0x5c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar9 = func_0x02d06f88(iVar6,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024eecb8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f0474(&fStack_30,iVar1,0);
              uStack_40 = 0;
              func_0x0157e8ec(uVar9,_UNK_02bab41c - fStack_30,0,0);
            }
          }
        }
      }
    }
  }
  return;
}

