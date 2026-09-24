/* Ghidra 12.1.2 native pseudocode; RVA 0x6A74708; Merger.MergeBoard.Systems.SpawnerSystem.HandleSpawnByTap; status ok */

/* WARNING: Possible PIC construction at 0x06b74a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b74bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b74a3c) */
/* WARNING: Removing unreachable block (ram,0x06b74bf0) */
/* WARNING: Removing unreachable block (ram,0x06b74bfc) */
/* WARNING: Removing unreachable block (ram,0x06b74cac) */
/* WARNING: Removing unreachable block (ram,0x06b74cb8) */
/* WARNING: Removing unreachable block (ram,0x06b74cd4) */
/* WARNING: Removing unreachable block (ram,0x06b74cdc) */
/* WARNING: Removing unreachable block (ram,0x06b74ce8) */
/* WARNING: Removing unreachable block (ram,0x06b74d30) */
/* WARNING: Removing unreachable block (ram,0x06b74d4c) */
/* WARNING: Removing unreachable block (ram,0x06b74dcc) */
/* WARNING: Removing unreachable block (ram,0x06b74dd0) */
/* WARNING: Removing unreachable block (ram,0x06b74de8) */
/* WARNING: Removing unreachable block (ram,0x06b74df0) */
/* WARNING: Removing unreachable block (ram,0x06b74e3c) */
/* WARNING: Removing unreachable block (ram,0x06b74dfc) */
/* WARNING: Removing unreachable block (ram,0x06b74e08) */
/* WARNING: Removing unreachable block (ram,0x06b74e4c) */
/* WARNING: Removing unreachable block (ram,0x06b74d7c) */
/* WARNING: Removing unreachable block (ram,0x06b74d80) */
/* WARNING: Removing unreachable block (ram,0x06b74d9c) */
/* WARNING: Removing unreachable block (ram,0x06b74da4) */
/* WARNING: Removing unreachable block (ram,0x06b74e18) */
/* WARNING: Removing unreachable block (ram,0x06b74db0) */
/* WARNING: Removing unreachable block (ram,0x06b74dbc) */
/* WARNING: Removing unreachable block (ram,0x06b74e28) */
/* WARNING: Removing unreachable block (ram,0x06b74ea8) */
/* WARNING: Removing unreachable block (ram,0x06b74ecc) */
/* WARNING: Removing unreachable block (ram,0x06b74f34) */
/* WARNING: Removing unreachable block (ram,0x06b74f38) */
/* WARNING: Removing unreachable block (ram,0x06b74edc) */
/* WARNING: Removing unreachable block (ram,0x06b7502c) */
/* WARNING: Removing unreachable block (ram,0x06b74ee8) */
/* WARNING: Removing unreachable block (ram,0x06b74f04) */
/* WARNING: Removing unreachable block (ram,0x06b74f0c) */
/* WARNING: Removing unreachable block (ram,0x06b74f68) */
/* WARNING: Removing unreachable block (ram,0x06b74f18) */
/* WARNING: Removing unreachable block (ram,0x06b74f24) */
/* WARNING: Removing unreachable block (ram,0x06b74f78) */
/* WARNING: Removing unreachable block (ram,0x06b74f94) */
/* WARNING: Removing unreachable block (ram,0x06b7500c) */
/* WARNING: Removing unreachable block (ram,0x06b74fe4) */

void Merger_MergeBoard_Systems_SpawnerSystem__HandleSpawnByTap(long param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long lStack_590;
  undefined8 uStack_588;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined1 auStack_4d0 [80];
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 auStack_460 [168];
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined1 auStack_380 [88];
  undefined1 auStack_328 [136];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_154;
  long lStack_150;
  undefined4 uStack_148;
  undefined1 auStack_f8 [120];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar7 = PTR_DAT_078314a8;
  puVar6 = PTR_DAT_078314a0;
  puVar5 = PTR_DAT_07831498;
  puVar3 = PTR_DAT_0782fe68;
  puVar4 = PTR_DAT_0782fe48;
  if ((bRam0000000007e2a6f9 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830cc0);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078314a0);
    func_0x03280a18(PTR_DAT_07830ae8);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_078314b0);
    func_0x03280a18(PTR_DAT_078314b8);
    func_0x03280a18(PTR_DAT_078314c0);
    func_0x03280a18(PTR_DAT_078314a8);
    func_0x03280a18(PTR_DAT_07830cc8);
    func_0x03280a18(PTR_DAT_078314c8);
    func_0x03280a18(PTR_DAT_07831498);
    bRam0000000007e2a6f9 = 1;
  }
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  func_0x072ce9a0(&lStack_150,0,0xe0);
  uStack_154 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_198 = param_2[1];
  uStack_1a0 = *param_2;
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uVar11 = func_0x03d1ad90(*(undefined8 *)puVar6);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar12,0,*(undefined8 *)puVar4,0);
  uStack_298 = uStack_198;
  uStack_2a0 = uStack_1a0;
  uStack_288 = uStack_188;
  uStack_290 = uStack_190;
  func_0x03e667c4(&uStack_180,&uStack_2a0,uVar11,uVar12,*(undefined8 *)puVar7);
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
    lVar13 = *(long *)puVar5;
  }
  puVar3 = PTR_DAT_078314c0;
  puVar4 = PTR_DAT_078314b8;
  lVar22 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
  if (lVar22 == 0) {
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar5;
    }
    uVar11 = **(undefined8 **)(lVar13 + 0xb8);
    lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078314b0);
    func_0x05352388(lVar22,uVar11,*(undefined8 *)PTR_DAT_078314c8,0);
    plVar14 = (long *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10);
    *plVar14 = lVar22;
    func_0x032809c4(plVar14,lVar22);
  }
  func_0x04498888(&uStack_70,&uStack_180,lVar22,*(undefined8 *)puVar3);
  uVar15 = func_0x04498a38(&uStack_70,&lStack_150,*(undefined8 *)puVar4);
  if ((uVar15 & 1) == 0) {
    return;
  }
  uStack_1b8 = param_2[1];
  uStack_1c0 = *param_2;
  uStack_1a8 = param_2[3];
  uStack_1b0 = param_2[2];
  uVar15 = func_0x06b993dc(*(undefined8 *)(param_1 + 0x18),&uStack_1c0,uStack_148,&uStack_154,0);
  lVar13 = lStack_150;
  if ((uVar15 & 1) == 0) {
    lVar13 = param_2[2];
    uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830cc0);
    func_0x06b9a188(uVar11,lStack_150,0);
    if (lVar13 != 0) {
      func_0x03ec33e4(lVar13,uVar11,*(undefined8 *)PTR_DAT_07830cc8);
      return;
    }
  }
  else {
    func_0x072ce970(&uStack_2a0,&lStack_150,0xe0);
    uStack_478 = uStack_288;
    uStack_480 = uStack_290;
    uStack_470 = uStack_280;
    func_0x072ce970(auStack_380,&lStack_150,0xe0);
    func_0x072ce970(auStack_4d0,auStack_328,0x50);
    func_0x072ce970(auStack_460,&lStack_150,0xe0);
    uStack_4f8 = uStack_3b0;
    uStack_500 = uStack_3b8;
    uStack_4e8 = uStack_3a0;
    uStack_4f0 = uStack_3a8;
    uStack_4e0 = uStack_398;
    plVar14 = (long *)func_0x06b4e898(lVar13,&uStack_480,auStack_4d0,&uStack_500,0);
    lVar13 = lStack_150;
    if (plVar14 == (long *)0x0) {
      return;
    }
    auVar24 = func_0x06b9c2a4(auStack_80,0);
    if (lVar13 != 0) {
      func_0x03d1d7ec(lVar13,auVar24._0_8_,auVar24._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
      uVar8 = uStack_154;
      uVar12 = param_2[1];
      uVar11 = *param_2;
      uVar19 = param_2[3];
      lVar13 = param_2[2];
      if ((bRam0000000007e2a6fb & 1) == 0) {
        func_0x03280a18(PTR_DAT_077c16b0);
        func_0x03280a18(PTR_DAT_0782fe78);
        func_0x03280a18(PTR_DAT_0782fe80);
        func_0x03280a18(PTR_DAT_0782fea8);
        func_0x03280a18(PTR_DAT_0782feb0);
        func_0x03280a18(PTR_DAT_0777e550);
        func_0x03280a18(PTR_DAT_0774f158);
        bRam0000000007e2a6fb = 1;
      }
      if ((plVar14 != (long *)0x0) && (plVar16 = (long *)plVar14[2], plVar16 != (long *)0x0)) {
        plVar23 = *(long **)(param_1 + 0x10);
        uVar17 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
        puVar4 = PTR_DAT_0777e550;
        if (plVar23 != (long *)0x0) {
          lVar20 = *plVar23;
          lVar22 = plVar14[4];
          uVar15 = (ulong)*(ushort *)(lVar20 + 0x12e);
          if (uVar15 != 0) {
            piVar21 = (int *)(*(long *)(lVar20 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077c16b0) {
                puVar18 = (undefined8 *)(lVar20 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_06b7515c;
              }
              uVar15 = uVar15 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar15 != 0);
          }
          puVar18 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_077c16b0,1);
LAB_06b7515c:
          puVar3 = PTR_DAT_0774f158;
          uVar17 = (*(code *)*puVar18)(plVar23,uVar17,uVar8,4,(char)lVar22 != '\0',0,puVar18[1]);
          uStack_5a0 = uVar11;
          uStack_598 = uVar12;
          lStack_590 = lVar13;
          uStack_588 = uVar19;
          func_0x06b98e60(&uStack_5a0,uVar17,lStack_150,0);
          func_0x06b4f57c(auStack_f8,lStack_150,0);
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          plVar16 = (long *)0x0;
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (plVar16 = plVar14,
             *(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
            plVar16 = (long *)0x0;
          }
          uVar11 = *(undefined8 *)puVar3;
          uVar11 = func_0x06ba3134(uVar17,*(undefined8 *)(param_1 + 0x20),uVar11,uVar11,uVar11,0);
          uVar12 = *(undefined8 *)puVar3;
          uVar12 = func_0x06ba3134(lStack_150,*(undefined8 *)(param_1 + 0x20),uVar12,uVar12,uVar12,0
                                  );
          if (plVar16 == (long *)0x0) {
            bVar9 = false;
            bVar10 = false;
          }
          else {
            bVar9 = *(char *)((long)plVar16 + 0x29) != '\0';
            bVar10 = (char)plVar16[5] != '\0';
          }
          uVar2 = *(undefined1 *)((long)plVar14 + 0x22);
          uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe80);
          func_0x06b9aa90(uVar19,lStack_150,uVar17,uStack_148,uVar8,1,uVar12,uVar11,bVar10,bVar9,
                          uVar2,0);
          puVar4 = PTR_DAT_0782fe78;
          if (lVar13 != 0) {
            func_0x03ec33e4(lVar13,uVar19,*(undefined8 *)PTR_DAT_0782feb0);
            uVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
            func_0x06b9a828(uVar12,uVar17,uVar11,0);
            if (lVar13 != 0) {
              func_0x03ec33e4(lVar13,uVar12,*(undefined8 *)PTR_DAT_0782fea8);
              return;
            }
          }
        }
      }
      func_0x03280cac();
      return;
    }
  }
  func_0x03280cac();
  puVar4 = PTR_DAT_078314d0;
  if ((bRam0000000007e2a6fa & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d57c8);
    func_0x03280a18(PTR_DAT_0782fe48);
    func_0x03280a18(PTR_DAT_078314d8);
    func_0x03280a18(PTR_DAT_078314e0);
    func_0x03280a18(PTR_DAT_077c1cf8);
    func_0x03280a18(PTR_DAT_077e5590);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_077a3990);
    func_0x03280a18(PTR_DAT_078314e8);
    func_0x03280a18(PTR_DAT_077c1e40);
    func_0x03280a18(PTR_DAT_07759ab8);
    func_0x03280a18(PTR_DAT_07759ac0);
    func_0x03280a18(PTR_DAT_078314f0);
    func_0x03280a18(PTR_DAT_078314f8);
    func_0x03280a18(PTR_DAT_07831500);
    func_0x03280a18(PTR_DAT_07831508);
    func_0x03280a18(PTR_DAT_078314d0);
    func_0x03280a18(PTR_DAT_07831498);
    bRam0000000007e2a6fa = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar4);
  return;
}

