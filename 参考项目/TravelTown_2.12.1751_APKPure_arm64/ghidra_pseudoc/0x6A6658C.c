/* Ghidra 12.1.2 native pseudocode; RVA 0x6A6658C; Merger.MergeBoard.Systems.ExpendableTimerActivationSystem.Tick; status ok */


/* WARNING: Possible PIC construction at 0x06b665d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b66600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b668c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b66d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b670fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b66d68) */
/* WARNING: Removing unreachable block (ram,0x06b66e80) */
/* WARNING: Removing unreachable block (ram,0x06b66db4) */
/* WARNING: Removing unreachable block (ram,0x06b66e84) */
/* WARNING: Removing unreachable block (ram,0x06b66dd8) */
/* WARNING: Removing unreachable block (ram,0x06b668c8) */
/* WARNING: Removing unreachable block (ram,0x06b66908) */
/* WARNING: Removing unreachable block (ram,0x06b66960) */
/* WARNING: Removing unreachable block (ram,0x06b6692c) */
/* WARNING: Removing unreachable block (ram,0x06b665d4) */
/* WARNING: Removing unreachable block (ram,0x06b66614) */
/* WARNING: Removing unreachable block (ram,0x06b665dc) */
/* WARNING: Removing unreachable block (ram,0x06b66604) */
/* WARNING: Removing unreachable block (ram,0x06b665f0) */
/* WARNING: Removing unreachable block (ram,0x06b66964) */
/* WARNING: Removing unreachable block (ram,0x06b669bc) */
/* WARNING: Removing unreachable block (ram,0x06b66a90) */
/* WARNING: Removing unreachable block (ram,0x06b66b00) */
/* WARNING: Removing unreachable block (ram,0x06b66b08) */
/* WARNING: Removing unreachable block (ram,0x06b66b24) */
/* WARNING: Removing unreachable block (ram,0x06b66b2c) */
/* WARNING: Removing unreachable block (ram,0x06b66b34) */
/* WARNING: Removing unreachable block (ram,0x06b66b7c) */
/* WARNING: Removing unreachable block (ram,0x06b66e88) */
/* WARNING: Removing unreachable block (ram,0x06b66ba8) */
/* WARNING: Removing unreachable block (ram,0x06b66bc4) */
/* WARNING: Removing unreachable block (ram,0x06b66bcc) */
/* WARNING: Removing unreachable block (ram,0x06b66bf4) */
/* WARNING: Removing unreachable block (ram,0x06b66bd8) */
/* WARNING: Removing unreachable block (ram,0x06b66be4) */
/* WARNING: Removing unreachable block (ram,0x06b66c00) */
/* WARNING: Removing unreachable block (ram,0x06b66e8c) */
/* WARNING: Removing unreachable block (ram,0x06b66c14) */
/* WARNING: Removing unreachable block (ram,0x06b66c30) */
/* WARNING: Removing unreachable block (ram,0x06b66c40) */
/* WARNING: Removing unreachable block (ram,0x06b66c48) */
/* WARNING: Removing unreachable block (ram,0x06b66c70) */
/* WARNING: Removing unreachable block (ram,0x06b66c54) */
/* WARNING: Removing unreachable block (ram,0x06b66c60) */
/* WARNING: Removing unreachable block (ram,0x06b66c7c) */
/* WARNING: Removing unreachable block (ram,0x06b66df4) */
/* WARNING: Removing unreachable block (ram,0x06b66df8) */
/* WARNING: Removing unreachable block (ram,0x06b66dfc) */
/* WARNING: Removing unreachable block (ram,0x06b66e14) */
/* WARNING: Removing unreachable block (ram,0x06b66e1c) */
/* WARNING: Removing unreachable block (ram,0x06b66e44) */
/* WARNING: Removing unreachable block (ram,0x06b66e28) */
/* WARNING: Removing unreachable block (ram,0x06b66e34) */
/* WARNING: Removing unreachable block (ram,0x06b66e50) */
/* WARNING: Removing unreachable block (ram,0x06b66e5c) */
/* WARNING: Removing unreachable block (ram,0x06b66e90) */
/* WARNING: Removing unreachable block (ram,0x06b66ec0) */
/* WARNING: Removing unreachable block (ram,0x06b66ee0) */
/* WARNING: Removing unreachable block (ram,0x06b66eec) */
/* WARNING: Removing unreachable block (ram,0x06b66ef0) */
/* WARNING: Removing unreachable block (ram,0x06b66f08) */
/* WARNING: Removing unreachable block (ram,0x06b66f10) */
/* WARNING: Removing unreachable block (ram,0x06b66f38) */
/* WARNING: Removing unreachable block (ram,0x06b66f1c) */
/* WARNING: Removing unreachable block (ram,0x06b66f28) */
/* WARNING: Removing unreachable block (ram,0x06b66f44) */
/* WARNING: Removing unreachable block (ram,0x06b66f50) */
/* WARNING: Removing unreachable block (ram,0x06b66f54) */
/* WARNING: Removing unreachable block (ram,0x06b66f5c) */
/* WARNING: Removing unreachable block (ram,0x06b66ecc) */
/* WARNING: Removing unreachable block (ram,0x06b66e60) */
/* WARNING: Removing unreachable block (ram,0x06b66c8c) */
/* WARNING: Removing unreachable block (ram,0x06b66ca4) */
/* WARNING: Removing unreachable block (ram,0x06b66cac) */
/* WARNING: Removing unreachable block (ram,0x06b66cd4) */
/* WARNING: Removing unreachable block (ram,0x06b66cb8) */
/* WARNING: Removing unreachable block (ram,0x06b66cc4) */
/* WARNING: Removing unreachable block (ram,0x06b66ce0) */
/* WARNING: Removing unreachable block (ram,0x06b67100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Merger_MergeBoard_Systems_ExpendableTimerActivationSystem__Tick
               (long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  long lVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 auStack_630 [8];
  undefined8 uStack_628;
  undefined8 uStack_600;
  long *plStack_5f8;
  undefined1 *puStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  undefined8 *puStack_5d8;
  long lStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined4 uStack_5a0;
  undefined3 uStack_59c;
  undefined4 uStack_598;
  undefined3 uStack_594;
  long lStack_590;
  undefined8 uStack_588;
  long *plStack_580;
  undefined8 uStack_578;
  undefined3 uStack_554;
  long lStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  double dStack_4a0;
  undefined8 uStack_498;
  undefined1 auStack_490 [8];
  long lStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined1 auStack_3b0 [160];
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  long lStack_210;
  undefined8 uStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long alStack_1b0 [28];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  if ((bRam0000000007e2a6a3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830b80);
    bRam0000000007e2a6a3 = 1;
  }
  puVar5 = PTR_DAT_07830b98;
  puVar4 = PTR_DAT_07830b90;
  puVar3 = PTR_DAT_07830b88;
  puVar2 = PTR_DAT_0782fe68;
  puVar1 = PTR_DAT_0782fe48;
  uVar22 = param_2[1];
  uVar21 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  if ((bRam0000000007e2a6a4 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_07830b88);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07830ba0);
    func_0x03280a18(PTR_DAT_07830ba8);
    func_0x03280a18(PTR_DAT_07830bb0);
    func_0x03280a18(PTR_DAT_07830bb8);
    func_0x03280a18(PTR_DAT_07830b90);
    func_0x03280a18(PTR_DAT_07830bc0);
    func_0x03280a18(PTR_DAT_07830bc8);
    func_0x03280a18(PTR_DAT_07830b98);
    func_0x03280a18(PTR_DAT_078105c0);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6a4 = 1;
  }
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  func_0x072ce9a0(alStack_1b0,0,0xe0);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1f0 = uVar21;
  uStack_1e8 = uVar22;
  uStack_1e0 = uVar8;
  uStack_1d8 = uVar9;
  uVar8 = func_0x03d1ade4(*(undefined8 *)puVar3);
  uVar9 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06015d08(uVar9,0,*(undefined8 *)puVar1,0);
  uStack_2c8 = uStack_1e8;
  uStack_2d0 = uStack_1f0;
  uStack_2b8 = uStack_1d8;
  uStack_2c0 = uStack_1e0;
  func_0x03e66864(&uStack_1d0,&uStack_2d0,uVar8,uVar9,*(undefined8 *)puVar4);
  lVar10 = *(long *)puVar5;
  if (*(int *)(lVar10 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar10 = *(long *)puVar5;
  }
  puVar2 = PTR_DAT_07830bb8;
  puVar1 = PTR_DAT_07830bb0;
  lVar19 = *(long *)(*(long *)(lVar10 + 0xb8) + 8);
  if (lVar19 == 0) {
    if (*(int *)(lVar10 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar10 = *(long *)puVar5;
    }
    uVar8 = **(undefined8 **)(lVar10 + 0xb8);
    lVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830ba8);
    func_0x05352478(lVar19,uVar8,*(undefined8 *)PTR_DAT_07830bc8,0);
    plVar11 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
    *plVar11 = lVar19;
    func_0x032809c4(plVar11,lVar19);
  }
  func_0x04498f04(&uStack_d0,&uStack_1d0,lVar19,*(undefined8 *)puVar2);
  uVar12 = func_0x044990b4(&uStack_d0,alStack_1b0,*(undefined8 *)puVar1);
  puVar1 = PTR_DAT_078105c0;
  if ((uVar12 & 1) == 0) {
    return;
  }
  func_0x072ce970(&uStack_2d0,alStack_1b0,0xe0);
  uStack_4a8 = uStack_208;
  lStack_4b0 = lStack_210;
  uStack_498 = uStack_1f8;
  dStack_4a0 = dStack_200;
  func_0x072ce970(auStack_3b0,alStack_1b0,0xe0);
  uStack_4c8 = uStack_308;
  uStack_4d0 = uStack_310;
  uStack_4b8 = uStack_2f8;
  uStack_4c0 = uStack_300;
  func_0x072ce970(auStack_490,alStack_1b0,0xe0);
  puVar17 = *(undefined8 **)puVar1;
  plVar11 = &lStack_4b0;
  puVar16 = &uStack_4d0;
  uStack_4f8 = uStack_480;
  lStack_500 = lStack_488;
  uStack_4e8 = uStack_470;
  uStack_4f0 = uStack_478;
  uStack_4d8 = uStack_460;
  uStack_4e0 = uStack_468;
  plVar15 = plVar11;
  if ((bRam0000000007e2a6a6 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830c10);
    func_0x03280a18(PTR_DAT_07830c18);
    bRam0000000007e2a6a6 = 1;
  }
  uVar9 = uStack_498;
  dVar7 = dStack_4a0;
  uVar8 = uStack_4a8;
  lVar19 = lStack_4b0;
  uVar6 = uStack_4a8._1_4_;
  uStack_554 = (undefined3)((ulong)uStack_4a8 >> 0x28);
  uStack_594 = (undefined3)((ulong)uStack_4b8 >> 0x28);
  uStack_598 = uStack_4b8._1_4_;
  lVar10 = -0x8000000000000000;
  if (dStack_4a0 != INFINITY) {
    lVar10 = (long)dStack_4a0;
  }
  lVar13 = func_0x06b664ec(param_1);
  plVar14 = (long *)func_0x06b664ec(param_1);
  puVar1 = PTR_DAT_07830c18;
  uStack_5a0 = uVar6;
  uStack_59c = uStack_554;
  if (alStack_1b0[0] == 0) {
    uVar8 = 0x6b67128;
    auVar23 = func_0x03280cac();
    lVar19 = auVar23._8_8_;
    lVar10 = auVar23._0_8_;
  }
  else {
    dVar20 = dVar7 * _UNK_017806f0 + (double)lVar13;
    lStack_590 = lVar19;
    plStack_580 = (long *)dVar7;
    uStack_588._0_5_ = CONCAT41(uVar6,1);
    uStack_588 = CONCAT44((int)((ulong)uVar8 >> 0x20),(undefined4)uStack_588);
    lVar19 = -0x8000000000000000;
    if (dVar20 != INFINITY) {
      lVar19 = (long)dVar20;
    }
    uStack_578 = uVar9;
    func_0x03d1dda0(alStack_1b0[0],&lStack_590,*(undefined8 *)PTR_DAT_07830c10);
    uStack_578._0_5_ = CONCAT41(uStack_598,lVar10 == 0);
    uStack_578 = CONCAT44(CONCAT31(uStack_594,uStack_598._3_1_),(undefined4)uStack_578);
    lStack_590 = lVar10;
    uStack_588 = lVar19;
    plStack_580 = plVar14;
    func_0x03d1de74(alStack_1b0[0],&lStack_590,*(undefined8 *)puVar1);
    uStack_5b8 = uStack_4e8;
    uStack_5c0 = uStack_4f0;
    uStack_5a8 = uStack_4d8;
    uStack_5b0 = uStack_4e0;
    uStack_5c8 = uStack_4f8;
    lStack_5d0 = lStack_500;
    uVar8 = 0x6b67100;
    lVar10 = param_1;
    lVar19 = alStack_1b0[0];
    plVar15 = &lStack_5d0;
    puVar16 = puVar17;
    plVar11 = plVar14;
  }
  lStack_5e0 = alStack_1b0[0];
  uStack_600 = uVar8;
  plStack_5f8 = plVar11;
  puStack_5f0 = (undefined1 *)&lStack_500;
  lStack_5e8 = param_1;
  puStack_5d8 = puVar17;
  if ((bRam0000000007e2a6a7 & 1) == 0) {
    puStack_5f0 = (undefined1 *)&lStack_500;
    func_0x03280a18(PTR_DAT_0777a488);
    func_0x03280a18(PTR_DAT_0777a568);
    func_0x03280a18(PTR_DAT_07800ab8);
    bRam0000000007e2a6a7 = 1;
  }
  if (lVar19 != 0) {
    plVar11 = *(long **)(lVar10 + 0x20);
    func_0x03d1b250(auStack_630,lVar19,*(undefined8 *)PTR_DAT_0777a488);
    if (plVar11 != (long *)0x0) {
      lVar10 = *plVar11;
      uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar12 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_0777a568) {
            puVar17 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
            goto LAB_06b67200;
          }
          uVar12 = uVar12 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar12 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a568,1);
LAB_06b67200:
      lVar10 = (*(code *)*puVar17)(plVar11,uStack_628,puVar17[1]);
      if ((plVar15[5] != 0) &&
         (uVar8 = MergeEngine_ECS_Systems_Items_TimeLimitedActivationSystem__CreateExtraDataWithTimerItemData
                            (*(undefined4 *)(plVar15[5] + 0x10),1,*(undefined8 *)PTR_DAT_07800ab8,
                             puVar16,0,0), lVar10 != 0)) {
        *(undefined8 *)(lVar10 + 0x38) = uVar8;
        func_0x032809c4((undefined8 *)(lVar10 + 0x38),uVar8);
        *(undefined1 *)(lVar10 + 0x40) = 1;
        return;
      }
    }
  }
  func_0x03280cac();
  return;
}

