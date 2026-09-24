
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01c12c4c(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_029f0e48 + 0x29f09dc);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_029f0e4c + 0x29f09f0),param_2,0);
    func_0x01438628(*(undefined4 *)(_UNK_029f0e50 + 0x29f09fc));
    func_0x01438628(*(undefined4 *)(_UNK_029f0e54 + 0x29f0a08));
    func_0x01438628(*(undefined4 *)(_UNK_029f0e58 + 0x29f0a14));
    func_0x01438628(*(undefined4 *)(_UNK_029f0e5c + 0x29f0a20));
    func_0x01438628(*(undefined4 *)(_UNK_029f0e60 + 0x29f0a2c));
    func_0x01438628(*(undefined4 *)(_UNK_029f0e64 + 0x29f0a38));
    *pcVar9 = '\x01';
  }
  uVar10 = 0;
  iVar3 = func_0x02953fd4(0x174,0);
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 8) != '\0') {
      if (*(int *)(**(int **)(_UNK_029f0e68 + 0x29f0aa8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x029f0e84();
      uVar11 = *(undefined4 *)(param_1 + 0x10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = func_0x029f1214(iVar3,uVar11);
      if (*(int *)(**(int **)(_UNK_029f0e6c + 0x29f0aec) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar13 = *(undefined4 **)(_UNK_029f0e70 + 0x29f0b0c);
      iVar8 = func_0x014e9518(*puVar13);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar16 = func_0x026ffbe0(iVar8,0);
      uStack_30 = (uint)((ulonglong)uVar16 >> 0x20);
      uStack_2c = (uint)uVar16;
      uStack_38 = *(uint *)(param_1 + 0x18);
      uStack_34 = *(uint *)(param_1 + 0x1c);
      bVar14 = uStack_2c <= uStack_38;
      uVar10 = uStack_34 - uStack_30;
      bVar1 = uStack_34 <= uStack_30;
      iVar8 = func_0x014e9518(*puVar13,uStack_34 - (uStack_30 + !bVar14),uStack_38 - uStack_2c);
      if (iVar8 == 0) {
        func_0x014388e4();
      }
      uVar16 = func_0x026ffbe0(iVar8,0);
      uStack_44 = (uint)((ulonglong)uVar16 >> 0x20);
      uStack_40 = (uint)uVar16;
      uStack_3c = *(uint *)(param_1 + 0x24);
      uVar12 = *(uint *)(param_1 + 0x20);
      bVar15 = uVar12 <= uStack_40;
      uVar6 = uStack_44 - uStack_3c;
      bVar2 = uStack_44 <= uStack_3c;
      if (param_2 != 0) {
        piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_029f0e74 + 0x29f0bc0),5);
        puVar13 = *(undefined4 **)(_UNK_029f0e78 + 0x29f0bd8);
        uStack_28 = CONCAT13((char)iVar3,(undefined3)uStack_28);
        iVar8 = func_0x014387ac(*puVar13,(int)&uStack_28 + 3);
        if (piVar4 == (int *)0x0) {
          func_0x014388e4();
        }
        if ((iVar8 != 0) &&
           (iVar5 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
          uVar11 = func_0x01438904();
          func_0x01438790(uVar11,0);
        }
        if (piVar4[3] == 0) {
          func_0x014388e8();
        }
        piVar4[4] = iVar8;
        func_0x014385cc(piVar4 + 4,iVar8);
        uStack_28 = CONCAT13(uStack_28._3_1_,
                             CONCAT12(*(undefined1 *)(param_1 + 0x30),(undefined2)uStack_28)) ^
                    0x10000;
        iVar8 = func_0x014387ac(*puVar13,(int)&uStack_28 + 2);
        if ((iVar8 != 0) &&
           (iVar5 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
          uVar11 = func_0x01438904();
          func_0x01438790(uVar11,0);
        }
        if ((uint)piVar4[3] < 2) {
          func_0x014388e8();
        }
        piVar4[5] = iVar8;
        func_0x014385cc(piVar4 + 5,iVar8);
        uStack_28._0_2_ = CONCAT11(bVar1 && bVar14 <= uVar10,(undefined1)uStack_28);
        iVar8 = func_0x014387ac(*puVar13,(int)&uStack_28 + 1);
        if ((iVar8 != 0) &&
           (iVar5 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
          uVar11 = func_0x01438904();
          func_0x01438790(uVar11,0);
        }
        if ((uint)piVar4[3] < 3) {
          func_0x014388e8();
        }
        piVar4[6] = iVar8;
        func_0x014385cc(piVar4 + 6,iVar8);
        uStack_28 = CONCAT31(uStack_28._1_3_,bVar2 && bVar15 <= uVar6);
        iVar8 = func_0x014387ac(*puVar13,&uStack_28);
        if ((iVar8 != 0) &&
           (iVar5 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
          uVar11 = func_0x01438904();
          func_0x01438790(uVar11,0);
        }
        if ((uint)piVar4[3] < 4) {
          func_0x014388e8();
        }
        piVar4[7] = iVar8;
        func_0x014385cc(piVar4 + 7,iVar8);
        iVar8 = *(int *)(param_1 + 0x10);
        if ((iVar8 != 0) &&
           (iVar5 = func_0x014387a8(iVar8,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
          uVar11 = func_0x01438904();
          func_0x01438790(uVar11,0);
        }
        if ((uint)piVar4[3] < 5) {
          func_0x014388e8();
        }
        piVar4[8] = iVar8;
        func_0x014385cc(piVar4 + 8,iVar8);
        if (*(int *)(**(int **)(_UNK_029f0e7c + 0x29f0dc0) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x026795f8(**(undefined4 **)(_UNK_029f0e80 + 0x29f0de4),piVar4,0);
        uVar16 = CONCAT44(uStack_44,uStack_40);
      }
      uVar6 = (uint)((ulonglong)uVar16 >> 0x20);
      uVar10 = 0;
      if (iVar3 != 0) {
        uVar10 = *(byte *)(param_1 + 0x30) ^ 1;
      }
      uVar10 = ((uVar6 <= uStack_3c && (uint)(uVar12 <= (uint)uVar16) <= uVar6 - uStack_3c) &&
               (uStack_34 <= uStack_30 && (uint)(uStack_2c <= uStack_38) <= uStack_34 - uStack_30))
               & uVar10;
    }
    return uVar10;
  }
  iVar3 = func_0x029540a4(0x174,0);
  if (iVar3 == 0) {
    func_0x014388e4();
  }
  uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar3 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar3 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a1c(&uStack_38,param_2,0);
  iVar8 = *(int *)(iVar3 + 8);
  uVar11 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar7 = 3;
  if (iVar3 == 0) {
    uVar7 = 2;
  }
  func_0x024f56d0(iVar8,uVar11,&uStack_38,uVar7,0,0);
  uVar10 = func_0x024f56e0(&uStack_38,0,0);
  return uVar10;
}

