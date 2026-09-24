
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0318d850(undefined4 param_1)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auStack_48 [24];
  
  pcVar7 = (char *)(_UNK_0318da58 + 0x318d868);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0318da5c + 0x318d87c));
    func_0x01438628(*(undefined4 *)(_UNK_0318da60 + 0x318d888));
    func_0x01438628(*(undefined4 *)(_UNK_0318da64 + 0x318d894));
    func_0x01438628(*(undefined4 *)(_UNK_0318da68 + 0x318d8a0));
    func_0x01438628(*(undefined4 *)(_UNK_0318da6c + 0x318d8ac));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x1371,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x1371,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    func_0x024f56c0(auStack_48,0,0);
    if (*(int *)(iVar3 + 0x10) != 0) {
      func_0x01523a6c(&stack0xffffffd0,*(int *)(iVar3 + 0x10),0);
    }
    func_0x01523a6c(&stack0xffffffd0,param_1,0);
    iVar6 = *(int *)(iVar3 + 8);
    uVar9 = *(undefined4 *)(iVar3 + 0xc);
    iVar3 = *(int *)(iVar3 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar3 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar6,uVar9,&stack0xffffffd0,uVar5,0,0);
    iVar3 = func_0x024f5770(&stack0xffffffd0,0,0);
    return iVar3;
  }
  iVar3 = FUN_03178744(param_1);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0317e7f4(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar1 = *(longlong *)(iVar3 + 0x20);
    if (*(int *)(**(int **)(_UNK_0318da70 + 0x318d930) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0318da74 + 0x318d950));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x34);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04cfd760(iVar3,0,**(undefined4 **)(_UNK_0318da78 + 0x318d984));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    fVar2 = _UNK_0318da54;
    fVar11 = *(float *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_0318da7c + 0x318d9b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar11 = fVar11 * fVar2;
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0318da80 + 0x318d9d0));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar12 = func_0x014e61a4(fVar11);
    lVar13 = func_0x014e6220(fVar11);
    if (fVar11 < 0.0) {
      lVar13 = lVar12;
    }
    lVar13 = lVar13 + lVar1;
    uVar8 = (uint)lVar13;
    uVar10 = (uint)((ulonglong)lVar13 >> 0x20);
    uVar14 = func_0x026ffbe0(iVar3,0);
    uVar4 = (uint)((ulonglong)uVar14 >> 0x20);
    iVar3 = uVar8 - (uint)uVar14;
    if (uVar10 <= uVar4 && (uint)((uint)uVar14 <= uVar8) <= uVar10 - uVar4) {
      iVar3 = 0;
    }
  }
  return iVar3;
}

