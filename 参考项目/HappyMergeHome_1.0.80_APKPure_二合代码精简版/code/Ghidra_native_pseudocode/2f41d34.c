
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f51d34(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_02f51ecc + 0x2f51d50);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f51ed0 + 0x2f51d64));
    func_0x01438628(*(undefined4 *)(_UNK_02f51ed4 + 0x2f51d70));
    func_0x01438628(*(undefined4 *)(_UNK_02f51ed8 + 0x2f51d7c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2167,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02f44c50(param_1);
    if (*(int *)(**(int **)(_UNK_02f51edc + 0x2f51de8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_02f51ee0 + 0x2f51e04));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar7 = func_0x026ffbe0(iVar4,0);
    iVar4 = FUN_02f44764(param_1);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    iVar4 = func_0x04cfd760(iVar4,0,**(undefined4 **)(_UNK_02f51ee4 + 0x2f51e54));
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    fVar6 = *(float *)(iVar4 + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    fVar6 = fVar6 * _UNK_02f51ec4;
    uVar8 = func_0x014e61a4(fVar6);
    uStack_28 = 0;
    if (fVar6 == _UNK_02f51ec8) {
      uVar8 = 0x8000000000000000;
    }
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    FUN_026ced30(iVar1,iVar4,(uint)uVar7 - (uint)uVar8,
                 (int)((ulonglong)uVar7 >> 0x20) - (iVar4 + (uint)((uint)uVar7 < (uint)uVar8)));
    return;
  }
  iVar1 = func_0x029540a4(0x2167,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x014388e4();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x024f56d0(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}

