
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_02c5088c(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar6 = (char *)(_UNK_02c5094c + 0x2c508a0);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c50950 + 0x2c508b4));
    *pcVar6 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x2191,0);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    piVar3 = (int *)func_0x024eecb8(iVar2,0);
    piVar1 = (int *)0x0;
    if ((piVar3 != (int *)0x0) &&
       (piVar1 = piVar3, *piVar3 != **(int **)(_UNK_02c50954 + 0x2c50934))) {
      piVar1 = (int *)0x0;
    }
    return piVar1;
  }
  iVar2 = func_0x029540a4(0x2191,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar6 = (char *)(_UNK_02879d0c + 0x2879c2c);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02879d10 + 0x2879c40),param_1,0);
    *pcVar6 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x024f56c0(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  func_0x024f56d0(iVar5,uVar7,&uStack_30,uVar4,0,0);
  piVar1 = (int *)func_0x035daef8(&uStack_30,0,**(undefined4 **)(_UNK_02879d14 + 0x2879cfc));
  return piVar1;
}

