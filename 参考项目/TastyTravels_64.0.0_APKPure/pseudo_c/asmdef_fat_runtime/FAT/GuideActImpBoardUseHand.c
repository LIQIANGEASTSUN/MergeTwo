/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.GuideActImpBoardUseHand$$_StopWait RVA 0x1c3ce18 =====

void FUN_01c4ce18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
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
  
  iVar1 = func_0x0229f06c(0x9350,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9350,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



// ===== FAT.GuideActImpBoardUseHand$$Play RVA 0x1c3ce70 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c4ce70(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar5 = (char *)(_UNK_01c4d178 + 0x1c4ce90);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4d17c + 0x1c4cea4));
    func_0x01384978(*(undefined4 *)(_UNK_01c4d180 + 0x1c4ceb0));
    func_0x01384978(*(undefined4 *)(_UNK_01c4d184 + 0x1c4cebc));
    func_0x01384978(*(undefined4 *)(_UNK_01c4d188 + 0x1c4cec8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x9351,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x9351,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    func_0x01384bf4();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  if (*(int *)(**(int **)(_UNK_01c4d18c + 0x1c4cf48) + 0x74) == 0) {
    func_0x01384ab4();
  }
  uVar4 = func_0x024506d0(0);
  fVar2 = (float)func_0x024516f0(uVar7,0xa7,uVar4,0);
  pcVar5 = (char *)(_UNK_01c4d190 + 0x1c4cf88);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01c4d194 + 0x1c4cf9c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01c4d198 + 0x1c4cfb4) + 0x74) == 0) {
    func_0x01384ab4();
  }
  dVar8 = (double)fVar2;
  dVar9 = (double)func_0x0148e1a4(SUB84(dVar8,0),(int)((ulonglong)dVar8 >> 0x20),&uStack_38);
  if (0.0 <= fVar2) {
    if (dVar9 != 0.5) {
      dVar8 = (double)func_0x02450740(SUB84(dVar8 + 0.5,0),(int)((ulonglong)(dVar8 + 0.5) >> 0x20));
      goto LAB_01c4d050;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      dVar8 = (double)func_0x0148df24(SUB84(dVar8 + -0.5,0),(int)((ulonglong)(dVar8 + -0.5) >> 0x20)
                                     );
      goto LAB_01c4d050;
    }
    dVar8 = -1.0;
  }
  dVar9 = (double)CONCAT44(uStack_34,uStack_38);
  uVar3 = func_0x01457ce4(uStack_38,uStack_34);
  dVar8 = dVar9 + dVar8;
  if ((uVar3 & 1) == 0) {
    dVar8 = dVar9;
  }
LAB_01c4d050:
  uVar7 = (undefined4)(longlong)dVar8;
  if (dVar8 == _UNK_01c4d170) {
    uVar7 = 0x80000000;
  }
  iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01c4d19c + 0x1c4d064));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01de4ff8(iVar1,uVar7,1 < *(int *)(param_2 + 0xc),0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    iVar6 = func_0x01c24918(0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar6 + 0x9c);
    func_0x0210cd7c(&uStack_38,iVar1,0);
    func_0x0210cd7c(&uStack_38,iVar1,0);
    uVar7 = func_0x01384be4(**(undefined4 **)(_UNK_01c4d1a0 + 0x1c4d10c));
    func_0x024500b4(uVar7,param_1,**(undefined4 **)(_UNK_01c4d1a4 + 0x1c4d128),0);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uStack_40 = 0;
    uStack_3c = 0;
    func_0x01c7a118(iVar6,uStack_38,uStack_34,uVar7);
  }
  return;
}



// ===== FAT.GuideActImpBoardUseHand$$.ctor RVA 0x1c3d1a8 =====

void FUN_01c4d1a8(int param_1)

{
  *(undefined1 *)(param_1 + 8) = 1;
  (*(code *)&UNK_051877b0)(param_1,0);
  return;
}



// ===== FAT.GuideActImpBoardUseHand$$<>iFixBaseProxy_Play RVA 0x1c3d1b8 =====

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


