
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_03050ffc(undefined4 param_1)

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
  
  pcVar7 = (char *)(_UNK_03051204 + 0x3051014);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03051208 + 0x3051028));
    func_0x01438628(*(undefined4 *)(_UNK_0305120c + 0x3051034));
    func_0x01438628(*(undefined4 *)(_UNK_03051210 + 0x3051040));
    func_0x01438628(*(undefined4 *)(_UNK_03051214 + 0x305104c));
    func_0x01438628(*(undefined4 *)(_UNK_03051218 + 0x3051058));
    *pcVar7 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x14a9,0);
  if (iVar3 != 0) {
    iVar3 = func_0x029540a4(0x14a9,0);
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
  iVar3 = FUN_0303cfbc(param_1);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0304411c(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    lVar1 = *(longlong *)(iVar3 + 0x20);
    if (*(int *)(**(int **)(_UNK_0305121c + 0x30510dc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03051220 + 0x30510fc));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x3c);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04cfd760(iVar3,0,**(undefined4 **)(_UNK_03051224 + 0x3051130));
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    fVar2 = _UNK_03051200;
    fVar11 = *(float *)(iVar3 + 0x10);
    if (*(int *)(**(int **)(_UNK_03051228 + 0x305115c) + 0x74) == 0) {
      func_0x014387a4();
    }
    fVar11 = fVar11 * fVar2;
    iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0305122c + 0x305117c));
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

