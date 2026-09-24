
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bb4058(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bb428c + 0x2bb4074);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bb4290 + 0x2bb4088));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4294 + 0x2bb4094));
    func_0x01438628(*(undefined4 *)(_UNK_02bb4298 + 0x2bb40a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bb429c + 0x2bb40ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bb42a0 + 0x2bb40b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bb42a4 + 0x2bb40c4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2626,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x2626,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar5,uVar6,&uStack_38,uVar3,0,0);
    return;
  }
  if (*(int *)(**(int **)(_UNK_02bb42a8 + 0x2bb4124) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bb42ac + 0x2bb4140));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar5 = 0;
  iVar1 = func_0x02c4ccf8(iVar1,6,0xffffffff,0);
  if (iVar1 != 0) {
    uStack_28 = *(undefined4 *)(iVar1 + 8);
    puVar8 = *(undefined4 **)(_UNK_02bb42b0 + 0x2bb4188);
    puVar7 = *(undefined4 **)(_UNK_02bb42b4 + 0x2bb4190);
    while( true ) {
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0xc) <= iVar5) break;
      iVar1 = FUN_02bad050(param_1,param_2);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b780b0(iVar1,iVar5,*puVar8);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar1 + 8)) {
        if (*(int *)(**(int **)(_UNK_02bb42b8 + 0x2bb4228) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(*puVar7);
        uVar6 = *(undefined4 *)(iVar1 + 8);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = func_0x029a6fa8(iVar2,uVar6,0);
        if (iVar2 == 0) {
          FUN_026f6b3c(iVar1,uStack_28,0);
        }
      }
      iVar5 = iVar5 + 1;
    }
  }
  return;
}

