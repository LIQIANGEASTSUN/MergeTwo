
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0310ddf0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  char *pcVar12;
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
  
  pcVar12 = (char *)(_UNK_0310deb8 + 0x310de08);
  if (*pcVar12 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0310debc + 0x310de1c));
    *pcVar12 = '\x01';
  }
  iVar6 = func_0x02953fd4(0x145e,0);
  if (iVar6 == 0) {
    if (*(int *)(**(int **)(_UNK_0310dec0 + 0x310de78) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = func_0x02c35d10(0x32,0);
    if (iVar6 == 0) {
      return 0;
    }
    pcVar12 = (char *)(_UNK_029f0e48 + 0x29f09dc);
    if (*pcVar12 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029f0e4c + 0x29f09f0),param_2,0);
      func_0x01438628(*(undefined4 *)(_UNK_029f0e50 + 0x29f09fc));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e54 + 0x29f0a08));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e58 + 0x29f0a14));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e5c + 0x29f0a20));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e60 + 0x29f0a2c));
      func_0x01438628(*(undefined4 *)(_UNK_029f0e64 + 0x29f0a38));
      *pcVar12 = '\x01';
    }
    uVar3 = 0;
    iVar6 = func_0x02953fd4(0x174,0);
    if (iVar6 == 0) {
      if (*(char *)(param_1 + 8) != '\0') {
        if (*(int *)(**(int **)(_UNK_029f0e68 + 0x29f0aa8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar6 = func_0x029f0e84();
        uVar10 = *(undefined4 *)(param_1 + 0x10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x029f1214(iVar6,uVar10);
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
        uVar3 = uStack_34 - uStack_30;
        bVar1 = uStack_34 <= uStack_30;
        iVar9 = func_0x014e9518(*puVar13,uStack_34 - (uStack_30 + !bVar14),uStack_38 - uStack_2c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        uVar16 = func_0x026ffbe0(iVar9,0);
        uStack_44 = (uint)((ulonglong)uVar16 >> 0x20);
        uStack_40 = (uint)uVar16;
        uStack_3c = *(uint *)(param_1 + 0x24);
        uVar11 = *(uint *)(param_1 + 0x20);
        bVar15 = uVar11 <= uStack_40;
        uVar7 = uStack_44 - uStack_3c;
        bVar2 = uStack_44 <= uStack_3c;
        if (param_2 != 0) {
          piVar4 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_029f0e74 + 0x29f0bc0),5);
          puVar13 = *(undefined4 **)(_UNK_029f0e78 + 0x29f0bd8);
          uStack_28 = CONCAT13((char)iVar6,(undefined3)uStack_28);
          iVar9 = func_0x014387ac(*puVar13,(int)&uStack_28 + 3);
          if (piVar4 == (int *)0x0) {
            func_0x014388e4();
          }
          if ((iVar9 != 0) &&
             (iVar5 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
            uVar10 = func_0x01438904();
            func_0x01438790(uVar10,0);
          }
          if (piVar4[3] == 0) {
            func_0x014388e8();
          }
          piVar4[4] = iVar9;
          func_0x014385cc(piVar4 + 4,iVar9);
          uStack_28 = CONCAT13(uStack_28._3_1_,
                               CONCAT12(*(undefined1 *)(param_1 + 0x30),(undefined2)uStack_28)) ^
                      0x10000;
          iVar9 = func_0x014387ac(*puVar13,(int)&uStack_28 + 2);
          if ((iVar9 != 0) &&
             (iVar5 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
            uVar10 = func_0x01438904();
            func_0x01438790(uVar10,0);
          }
          if ((uint)piVar4[3] < 2) {
            func_0x014388e8();
          }
          piVar4[5] = iVar9;
          func_0x014385cc(piVar4 + 5,iVar9);
          uStack_28._0_2_ = CONCAT11(bVar1 && bVar14 <= uVar3,(undefined1)uStack_28);
          iVar9 = func_0x014387ac(*puVar13,(int)&uStack_28 + 1);
          if ((iVar9 != 0) &&
             (iVar5 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
            uVar10 = func_0x01438904();
            func_0x01438790(uVar10,0);
          }
          if ((uint)piVar4[3] < 3) {
            func_0x014388e8();
          }
          piVar4[6] = iVar9;
          func_0x014385cc(piVar4 + 6,iVar9);
          uStack_28 = CONCAT31(uStack_28._1_3_,bVar2 && bVar15 <= uVar7);
          iVar9 = func_0x014387ac(*puVar13,&uStack_28);
          if ((iVar9 != 0) &&
             (iVar5 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
            uVar10 = func_0x01438904();
            func_0x01438790(uVar10,0);
          }
          if ((uint)piVar4[3] < 4) {
            func_0x014388e8();
          }
          piVar4[7] = iVar9;
          func_0x014385cc(piVar4 + 7,iVar9);
          iVar9 = *(int *)(param_1 + 0x10);
          if ((iVar9 != 0) &&
             (iVar5 = func_0x014387a8(iVar9,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
            uVar10 = func_0x01438904();
            func_0x01438790(uVar10,0);
          }
          if ((uint)piVar4[3] < 5) {
            func_0x014388e8();
          }
          piVar4[8] = iVar9;
          func_0x014385cc(piVar4 + 8,iVar9);
          if (*(int *)(**(int **)(_UNK_029f0e7c + 0x29f0dc0) + 0x74) == 0) {
            func_0x014387a4();
          }
          func_0x026795f8(**(undefined4 **)(_UNK_029f0e80 + 0x29f0de4),piVar4,0);
          uVar16 = CONCAT44(uStack_44,uStack_40);
        }
        uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
        uVar3 = 0;
        if (iVar6 != 0) {
          uVar3 = *(byte *)(param_1 + 0x30) ^ 1;
        }
        uVar3 = ((uVar7 <= uStack_3c && (uint)(uVar11 <= (uint)uVar16) <= uVar7 - uStack_3c) &&
                (uStack_34 <= uStack_30 && (uint)(uStack_2c <= uStack_38) <= uStack_34 - uStack_30))
                & uVar3;
      }
      return uVar3;
    }
    iVar6 = func_0x029540a4(0x174,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
  }
  else {
    iVar6 = func_0x029540a4(0x145e,0);
    if (iVar6 == 0) {
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
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,param_1,0);
  func_0x01523a1c(&uStack_38,param_2,0);
  iVar9 = *(int *)(iVar6 + 8);
  uVar10 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar8 = 3;
  if (iVar6 == 0) {
    uVar8 = 2;
  }
  func_0x024f56d0(iVar9,uVar10,&uStack_38,uVar8,0,0);
  uVar3 = func_0x024f56e0(&uStack_38,0,0);
  return uVar3;
}

