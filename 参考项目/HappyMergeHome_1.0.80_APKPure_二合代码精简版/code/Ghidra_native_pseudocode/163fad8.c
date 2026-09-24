
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0164fad8(undefined4 param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  float fVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_0164fd54 + 0x164faf4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164fd58 + 0x164fb08));
    func_0x01438628(*(undefined4 *)(_UNK_0164fd5c + 0x164fb14));
    func_0x01438628(*(undefined4 *)(_UNK_0164fd60 + 0x164fb20));
    func_0x01438628(*(undefined4 *)(_UNK_0164fd64 + 0x164fb2c));
    func_0x01438628(*(undefined4 *)(_UNK_0164fd68 + 0x164fb38));
    *pcVar7 = '\x01';
  }
  iVar9 = 0;
  iVar2 = func_0x02953fd4(0x16a1,0);
  if (iVar2 == 0) {
    iVar2 = FUN_0163bb3c(param_1);
    if (iVar2 != 0) {
      iVar2 = FUN_01642704(param_1,0);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      lVar1 = *(longlong *)(iVar2 + 0x20);
      if (*(int *)(**(int **)(_UNK_0164fd6c + 0x164fbc8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0164fd70 + 0x164fbe8));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x3c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = func_0x0152983c(iVar2,0,**(undefined4 **)(_UNK_0164fd74 + 0x164fc1c));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      fVar11 = *(float *)(iVar2 + 0x10) * _UNK_0164fd50;
      lVar12 = func_0x014e61a4(fVar11);
      lVar13 = func_0x014e6220(fVar11);
      if (fVar11 < 0.0) {
        lVar13 = lVar12;
      }
      lVar1 = lVar13 + lVar1;
      func_0x0164fd80(param_1,(int)((ulonglong)lVar13 >> 0x20),(int)lVar1,
                      (int)((ulonglong)lVar1 >> 0x20));
      if (*(int *)(**(int **)(_UNK_0164fd78 + 0x164fc88) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_0164fd7c + 0x164fca4));
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x026ffbe0(iVar2,0);
      iVar4 = (int)((ulonglong)uVar14 >> 0x20);
      uVar3 = (uint)uVar14;
      iVar2 = FUN_01642704(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar2 = *(int *)(iVar2 + 0x78);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar2 + 0x24);
      iVar9 = 0;
      bVar10 = *(uint *)(iVar2 + 0x20) < uVar3;
      if ((int)(iVar5 - (iVar4 + (uint)bVar10)) < 0 ==
          (SBORROW4(iVar5,iVar4) != SBORROW4(iVar5 - iVar4,(uint)bVar10))) {
        iVar2 = FUN_01642704(param_1,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar2 = *(int *)(iVar2 + 0x78);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        iVar9 = *(int *)(iVar2 + 0x20) - uVar3;
      }
    }
    return iVar9;
  }
  iVar2 = func_0x029540a4(0x16a1,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_30,param_1,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar6 = 2;
  if (iVar2 == 0) {
    uVar6 = 1;
  }
  func_0x024f56d0(iVar9,uVar8,&uStack_30,uVar6,0,0);
  iVar2 = func_0x024f5770(&uStack_30,0,0);
  return iVar2;
}

