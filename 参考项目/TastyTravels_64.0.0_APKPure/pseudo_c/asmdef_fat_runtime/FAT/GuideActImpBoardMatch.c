/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardMatch$$Play RVA 0x1c398b8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c498b8(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
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
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_01c49b58 + 0x1c498d8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c49b5c + 0x1c498ec));
    func_0x01384978(*(undefined4 *)(_UNK_01c49b60 + 0x1c498f8));
    func_0x01384978(*(undefined4 *)(_UNK_01c49b64 + 0x1c49904));
    func_0x01384978(*(undefined4 *)(_UNK_01c49b68 + 0x1c49910));
    *pcVar6 = '\x01';
  }
  uVar7 = 0;
  iVar1 = func_0x0229f06c(0x9314,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9314,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
  }
  if (param_2 == 0 || iVar1 == 0) goto LAB_01c49aa8;
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01c49b6c + 0x1c49988) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar7,0xa7,uVar4,0);
  pcVar6 = (char *)(_UNK_01c49b70 + 0x1c499c8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c49b74 + 0x1c499dc));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01c49b78 + 0x1c499f4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar8 = (double)fVar2;
  dVar9 = (double)func_0x0148e1a4(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&uStack_28);
  if (0.0 <= fVar2) {
    if (dVar9 == 0.5) {
      dVar8 = 1.0;
      goto LAB_01c49a58;
    }
    dVar8 = (double)func_0x02450740(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
  }
  else if (dVar9 == -0.5) {
    dVar8 = -1.0;
LAB_01c49a58:
    uVar3 = func_0x01457ce4(uStack_28,uStack_24);
    dVar8 = (double)CONCAT44(uStack_24,uStack_28) + dVar8;
    if ((uVar3 & 1) == 0) {
      dVar8 = (double)CONCAT44(uStack_24,uStack_28);
    }
  }
  else {
    dVar8 = (double)func_0x0148df24(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20));
  }
  uVar7 = (undefined4)(longlong)dVar8;
  if (dVar8 == _UNK_01c49b50) {
    uVar7 = 0x80000000;
  }
LAB_01c49aa8:
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c49b7c + 0x1c49ab4));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01ddc2c0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e26200(iVar1,uVar7,0);
  if (*(int *)(**(int **)(_UNK_01c49b80 + 0x1c49b00) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01c49b84 + 0x1c49b1c));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028c3fd8(iVar1,0);
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardMatch$$.ctor RVA 0x1c39b88 =====

void FUN_01c49b88(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardMatch$$<>iFixBaseProxy_Play RVA 0x1c39b98 =====

void thunk_FUN_01c47208(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x92e1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x92e1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}


