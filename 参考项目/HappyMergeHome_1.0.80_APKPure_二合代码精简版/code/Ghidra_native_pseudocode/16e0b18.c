
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_016f0b18(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
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
  
  pcVar10 = (char *)(_UNK_016f0be0 + 0x16f0b30);
  if (*pcVar10 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016f0be4 + 0x16f0b44));
    *pcVar10 = '\x01';
  }
  iVar3 = func_0x02953fd4(0x1863,0);
  if (iVar3 == 0) {
    if (*(int *)(**(int **)(_UNK_016f0be8 + 0x16f0ba0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar3 = func_0x02c35d10(0x32,0);
    if (iVar3 == 0) {
      return 0;
    }
    pcVar10 = (char *)(_UNK_029f0e48 + 0x29f09dc);
    if (*pcVar10 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029f0e4c + 0x29f09f0),param_2,0);
      func_0x01438628(*(undefined4 *)(_UNK_029f0e50 + 0x29f09fc));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e54 + 0x29f0a08));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e58 + 0x29f0a14));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e5c + 0x29f0a20));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e60 + 0x29f0a2c));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e64 + 0x29f0a38));
      *pcVar10 = '\x01';
    }
    uVar4 = 0;
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
        iVar9 = func_0x014e9518(*puVar13);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar9,0);
        uStack_30 = (uint)((ulonglong)uVar16 >> 0x20);
        uStack_2c = (uint)uVar16;
        uStack_38 = *(uint *)(param_1 + 0x18);
        uStack_34 = *(uint *)(param_1 + 0x1c);
        bVar14 = uStack_2c <= uStack_38;
        uVar4 = uStack_34 - uStack_30;
        bVar1 = uStack_34 <= uStack_30;
        iVar9 = func_0x014e9518(*puVar13,uStack_34 - (uStack_30 + !bVar14),uStack_38 - uStack_2c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar9,0);
        uStack_44 = (uint)((ulonglong)uVar16 >> 0x20);
        uStack_40 = (uint)uVar16;
        uStack_3c = *(uint *)(param_1 + 0x24);
        uVar12 = *(uint *)(param_1 + 0x20);
        bVar15 = uVar12 <= uStack_40;
        uVar7 = uStack_44 - uStack_3c;
        bVar2 = uStack_44 <= uStack_3c;
        if (param_2 != 0) {
          piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_029f0e74 + 0x29f0bc0),5);
          puVar13 = *(undefined4 **)(_UNK_029f0e78 + 0x29f0bd8);
          uStack_28 = CONCAT13((char)iVar3,(undefined3)uStack_28);
          iVar9 = func_0x014387ac(*puVar13,(int)&uStack_28 + 3);
          if (piVar5 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar9 != 0) &&
             (iVar6 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar11 = func_0x01438904();
            func_0x01438790(uVar11,0);
          }
          if (piVar5[3] == 0) {
            func_0x014388e8();
          }
          piVar5[4] = iVar9;
          func_0x014385cc(piVar5 + 4,iVar9);
          uStack_28 = CONCAT13(uStack_28._3_1_,
                               CONCAT12(*(undefined1 *)(param_1 + 0x30),(undefined2)uStack_28)) ^
                      0x10000;
          iVar9 = func_0x014387ac(*puVar13,(int)&uStack_28 + 2);
          if ((iVar9 != 0) &&
             (iVar6 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar11 = func_0x01438904();
            func_0x01438790(uVar11,0);
          }
          if ((uint)piVar5[3] < 2) {
            func_0x014388e8();
          }
          piVar5[5] = iVar9;
          func_0x014385cc(piVar5 + 5,iVar9);
          uStack_28._0_2_ = CONCAT11(bVar1 && bVar14 <= uVar4,(undefined1)uStack_28);
          iVar9 = func_0x014387ac(*puVar13,(int)&uStack_28 + 1);
          if ((iVar9 != 0) &&
             (iVar6 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar11 = func_0x01438904();
            func_0x01438790(uVar11,0);
          }
          if ((uint)piVar5[3] < 3) {
            func_0x014388e8();
          }
          piVar5[6] = iVar9;
          func_0x014385cc(piVar5 + 6,iVar9);
          uStack_28 = CONCAT31(uStack_28._1_3_,bVar2 && bVar15 <= uVar7);
          iVar9 = func_0x014387ac(*puVar13,&uStack_28);
          if ((iVar9 != 0) &&
             (iVar6 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar11 = func_0x01438904();
            func_0x01438790(uVar11,0);
          }
          if ((uint)piVar5[3] < 4) {
            func_0x014388e8();
          }
          piVar5[7] = iVar9;
          func_0x014385cc(piVar5 + 7,iVar9);
          iVar9 = *(int *)(param_1 + 0x10);
          if ((iVar9 != 0) &&
             (iVar6 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar5 + 0x20)), iVar6 == 0)) {
            uVar11 = func_0x01438904();
            func_0x01438790(uVar11,0);
          }
          if ((uint)piVar5[3] < 5) {
            func_0x014388e8();
          }
          piVar5[8] = iVar9;
          func_0x014385cc(piVar5 + 8,iVar9);
          if (*(int *)(**(int **)(_UNK_029f0e7c + 0x29f0dc0) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x026795f8(**(undefined4 **)(_UNK_029f0e80 + 0x29f0de4),piVar5,0);
          uVar16 = CONCAT44(uStack_44,uStack_40);
        }
        uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = *(byte *)(param_1 + 0x30) ^ 1;
        }
        uVar4 = ((uVar7 <= uStack_3c && (uint)(uVar12 <= (uint)uVar16) <= uVar7 - uStack_3c) &&
                (uStack_34 <= uStack_30 && (uint)(uStack_2c <= uStack_38) <= uStack_34 - uStack_30))
                & uVar4;
      }
      return uVar4;
    }
    iVar3 = func_0x029540a4(0x174,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar3 = func_0x029540a4(0x1863,0);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
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
  iVar9 = *(int *)(iVar3 + 8);
  uVar11 = *(undefined4 *)(iVar3 + 0xc);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar8 = 3;
  if (iVar3 == 0) {
    uVar8 = 2;
  }
  func_0x024f56d0(iVar9,uVar11,&uStack_38,uVar8,0,0);
  uVar4 = func_0x024f56e0(&uStack_38,0,0);
  return uVar4;
}

