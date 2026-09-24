/* Ghidra 12.1.2 native pseudocode; RVA 0x6A99684; Merger.MergeBoard.Extensions.MergeBoardLayoutExtensions.TryGetRandomEmptyPositionIncludingDeadPosition; status ok */


/* WARNING: Possible PIC construction at 0x06b9987c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b99b7c: Changing call to branch */

undefined8 *
Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__TryGetRandomEmptyPositionIncludingDeadPosition
          (long *param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar13 = PTR_DAT_078325e8;
  puVar5 = PTR_DAT_0782fea0;
  puVar10 = PTR_DAT_0782fe98;
  puVar8 = PTR_DAT_0782fe68;
  puVar6 = PTR_DAT_0782fe50;
  puVar4 = PTR_DAT_0782fe48;
  uVar26 = (ulong)param_3;
  if ((bRam0000000007e2a831 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_0782fe50);
    func_0x03280a18(PTR_DAT_0782fe60);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_0782fe70);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_07759ac8);
    func_0x03280a18(PTR_DAT_0782fe98);
    func_0x03280a18(PTR_DAT_0782fea0);
    func_0x03280a18(PTR_DAT_078325f8);
    func_0x03280a18(PTR_DAT_078325e8);
    bRam0000000007e2a831 = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = param_2[1];
  uStack_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  uVar16 = func_0x03d19c6c(*(undefined8 *)puVar6);
  uVar17 = func_0x03280ca0(*(undefined8 *)puVar8);
  func_0x06015d08(uVar17,0,*(undefined8 *)puVar4,0);
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  func_0x03e64a64(&uStack_a0,&uStack_80,uVar16,uVar17,*(undefined8 *)puVar5);
  lVar18 = func_0x04485bc8(&uStack_a0,*(undefined8 *)puVar10);
  lVar22 = *(long *)puVar13;
  if (*(int *)(lVar22 + 0xe0) == 0) {
    func_0x03280b8c(lVar22);
    lVar22 = *(long *)puVar13;
  }
  puVar8 = PTR_DAT_0782fe60;
  puVar4 = PTR_DAT_077c1cf8;
  lVar27 = *(long *)(*(long *)(lVar22 + 0xb8) + 0x10);
  if (lVar27 == 0) {
    if (*(int *)(lVar22 + 0xe0) == 0) {
      func_0x03280b8c(lVar22);
      lVar22 = *(long *)puVar13;
    }
    uVar17 = **(undefined8 **)(lVar22 + 0xb8);
    uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
    func_0x0534decc(uVar16,uVar17,*(undefined8 *)PTR_DAT_078325f8,0);
    puVar19 = (undefined8 *)(*(long *)(*(long *)puVar13 + 0xb8) + 0x10);
    *puVar19 = uVar16;
  }
  else {
    uVar17 = *(undefined8 *)PTR_DAT_0782fe60;
    uVar16 = func_0x03d4d48c(lVar18,lVar27);
    lVar22 = func_0x03d5fde0(uVar16,*(undefined8 *)puVar4);
    if (lVar22 != 0) {
      lVar23 = *(long *)(lVar22 + 0x10);
      lVar24 = *(long *)PTR_DAT_07759ac8;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      lVar18 = lVar22;
      if (lVar23 != 0) {
        uVar15 = *(uint *)(lVar22 + 0x18);
        if (uVar15 < *(uint *)(lVar23 + 0x18)) {
          *(uint *)(lVar22 + 0x18) = uVar15 + 1;
          *(uint *)(lVar23 + (long)(int)uVar15 * 4 + 0x20) = param_3;
        }
        else {
          uVar17 = *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70);
          func_0x04119c98(lVar22,uVar26);
        }
        if (param_1 != (long *)0x0) {
          lVar18 = *param_1;
          uVar26 = (ulong)*(ushort *)(lVar18 + 0x12e);
          if (uVar26 != 0) {
            piVar25 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
            do {
              if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_077c1e40) {
                puVar19 = (undefined8 *)(lVar18 + (long)(*piVar25 + 1) * 0x10 + 0x138);
                goto LAB_06b99958;
              }
              uVar26 = uVar26 - 1;
              piVar25 = piVar25 + 4;
            } while (uVar26 != 0);
          }
          puVar19 = (undefined8 *)func_0x03256b10(param_1,*(long *)PTR_DAT_077c1e40,1);
LAB_06b99958:
          uVar15 = (*(code *)*puVar19)(param_1,lVar22,param_4,puVar19[1]);
          return (undefined8 *)(ulong)(uVar15 & 1);
        }
      }
    }
    auVar32 = func_0x03280cac();
    puVar14 = PTR_DAT_078325e8;
    puVar12 = PTR_DAT_0782fea0;
    puVar11 = PTR_DAT_0782fe98;
    puVar9 = PTR_DAT_0782fe68;
    puVar7 = PTR_DAT_0782fe50;
    puVar5 = PTR_DAT_0782fe48;
    puVar19 = auVar32._8_8_;
    plVar20 = auVar32._0_8_;
    pcStack_120 = 
    Merger_MergeBoard_Extensions_MergeBoardLayoutExtensions__TryGetRandomEmptyPositionFromContext;
    puStack_110 = puVar6;
    puStack_108 = puVar8;
    puStack_100 = puVar4;
    puStack_f8 = puVar13;
    puStack_f0 = puVar10;
    lStack_e8 = lVar27;
    lStack_e0 = lVar18;
    uStack_d8 = uVar26;
    plStack_d0 = param_1;
    uStack_c8 = param_4;
    if ((bRam0000000007e2a832 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0782fe48);
      func_0x03280a18(PTR_DAT_0782fe50);
      func_0x03280a18(PTR_DAT_0782fe60);
      func_0x03280a18(PTR_DAT_077c1cf8);
      func_0x03280a18(PTR_DAT_0782fe68);
      func_0x03280a18(PTR_DAT_0782fe70);
      func_0x03280a18(PTR_DAT_077c1e40);
      func_0x03280a18(PTR_DAT_0782fe98);
      func_0x03280a18(PTR_DAT_0782fea0);
      func_0x03280a18(PTR_DAT_07832600);
      func_0x03280a18(PTR_DAT_078325e8);
      bRam0000000007e2a832 = 1;
    }
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uVar31 = puVar19[1];
    uVar30 = *puVar19;
    uVar29 = puVar19[3];
    uVar28 = puVar19[2];
    uVar16 = func_0x03d19c6c(*(undefined8 *)puVar7);
    uVar21 = func_0x03280ca0(*(undefined8 *)puVar9);
    func_0x06015d08(uVar21,0,*(undefined8 *)puVar5,0);
    uStack_140 = uVar30;
    uStack_138 = uVar31;
    uStack_130 = uVar28;
    uStack_128 = uVar29;
    func_0x03e64a64(&uStack_160,&uStack_140,uVar16,uVar21,*(undefined8 *)puVar12);
    uVar16 = func_0x04485bc8(&uStack_160,*(undefined8 *)puVar11);
    lVar18 = *(long *)puVar14;
    if (*(int *)(lVar18 + 0xe0) == 0) {
      func_0x03280b8c(lVar18);
      lVar18 = *(long *)puVar14;
    }
    puVar4 = PTR_DAT_077c1cf8;
    lVar22 = *(long *)(*(long *)(lVar18 + 0xb8) + 0x18);
    if (lVar22 == 0) {
      if (*(int *)(lVar18 + 0xe0) == 0) {
        func_0x03280b8c(lVar18);
        lVar18 = *(long *)puVar14;
      }
      uVar17 = **(undefined8 **)(lVar18 + 0xb8);
      uVar16 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe70);
      func_0x0534decc(uVar16,uVar17,*(undefined8 *)PTR_DAT_07832600,0);
      puVar19 = (undefined8 *)(*(long *)(*(long *)puVar14 + 0xb8) + 0x18);
      *puVar19 = uVar16;
    }
    else {
      uVar16 = func_0x03d4d48c(uVar16,lVar22,*(undefined8 *)PTR_DAT_0782fe60);
      uVar16 = func_0x03d5fde0(uVar16,*(undefined8 *)puVar4);
      if (plVar20 != (long *)0x0) {
        lVar18 = *plVar20;
        uVar26 = (ulong)*(ushort *)(lVar18 + 0x12e);
        if (uVar26 != 0) {
          piVar25 = (int *)(*(long *)(lVar18 + 0xb0) + 8);
          do {
            if (*(long *)(piVar25 + -2) == *(long *)PTR_DAT_077c1e40) {
              puVar19 = (undefined8 *)(lVar18 + (long)(*piVar25 + 1) * 0x10 + 0x138);
              goto LAB_06b99bf8;
            }
            uVar26 = uVar26 - 1;
            piVar25 = piVar25 + 4;
          } while (uVar26 != 0);
        }
        puVar19 = (undefined8 *)func_0x03256b10(plVar20,*(long *)PTR_DAT_077c1e40,1);
LAB_06b99bf8:
        uVar15 = (*(code *)*puVar19)(plVar20,uVar16,uVar17,puVar19[1]);
        return (undefined8 *)(ulong)(uVar15 & 1);
      }
      func_0x03280cac();
      puVar4 = PTR_DAT_078325e8;
      if ((bRam0000000007e2a833 & 1) == 0) {
        func_0x03280a18(PTR_DAT_078325e8);
        bRam0000000007e2a833 = 1;
      }
      uVar16 = func_0x03280ca0(*(undefined8 *)puVar4);
      func_0x057da5fc(uVar16,0);
      **(undefined8 **)(*(long *)puVar4 + 0xb8) = uVar16;
      puVar19 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
    }
  }
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar19 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar19 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar19;
}

