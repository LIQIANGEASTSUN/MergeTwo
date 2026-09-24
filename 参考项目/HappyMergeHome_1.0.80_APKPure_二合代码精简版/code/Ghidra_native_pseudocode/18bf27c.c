
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018cf27c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
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
  
  pcVar4 = (char *)(_UNK_018cf414 + 0x18cf294);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018cf418 + 0x18cf2a8));
    func_0x01438628(*(undefined4 *)(_UNK_018cf41c + 0x18cf2b4));
    func_0x01438628(*(undefined4 *)(_UNK_018cf420 + 0x18cf2c0));
    func_0x01438628(*(undefined4 *)(_UNK_018cf424 + 0x18cf2cc));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x954d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x954d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    pcVar4 = (char *)(_UNK_02929c64 + 0x2929b70);
    if (*pcVar4 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02929c68 + 0x2929b84),param_1,param_2,0);
      *pcVar4 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0);
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
    iVar3 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x024f56d0(iVar3,uVar6,&uStack_38,uVar2,0,0);
    uVar6 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_02929c6c + 0x2929c54));
    return uVar6;
  }
  piVar5 = *(int **)(_UNK_018cf428 + 0x18cf328);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar7 = *(undefined4 **)(_UNK_018cf42c + 0x18cf344);
  iVar1 = func_0x014e9518(*puVar7);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if ((-1 < param_2) && (*(int *)(iVar1 + 0x2c) != 0)) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar7);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2c);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (param_2 < *(int *)(iVar1 + 0xc)) {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar7);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar6 = (*(code *)&SUB_04cfd760)(iVar1,param_2,**(undefined4 **)(_UNK_018cf430 + 0x18cf400));
      return uVar6;
    }
  }
  return 0;
}

