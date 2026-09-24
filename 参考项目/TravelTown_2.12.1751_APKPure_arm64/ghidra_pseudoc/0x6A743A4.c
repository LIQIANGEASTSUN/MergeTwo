/* Ghidra 12.1.2 native pseudocode; RVA 0x6A743A4; Merger.MergeBoard.Systems.SpawnerSystem.Tick; status ok */

/* WARNING: Possible PIC construction at 0x06b74484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b746b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b74a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b74bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b75008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b74a3c) */
/* WARNING: Removing unreachable block (ram,0x06b746b8) */
/* WARNING: Removing unreachable block (ram,0x06b74488) */
/* WARNING: Removing unreachable block (ram,0x06b74490) */
/* WARNING: Removing unreachable block (ram,0x06b744a4) */
/* WARNING: Removing unreachable block (ram,0x06b7452c) */
/* WARNING: Removing unreachable block (ram,0x06b74534) */
/* WARNING: Removing unreachable block (ram,0x06b74540) */
/* WARNING: Removing unreachable block (ram,0x06b74548) */
/* WARNING: Removing unreachable block (ram,0x06b74550) */
/* WARNING: Removing unreachable block (ram,0x06b74598) */
/* WARNING: Removing unreachable block (ram,0x06b745e4) */
/* WARNING: Removing unreachable block (ram,0x06b746cc) */
/* WARNING: Removing unreachable block (ram,0x06b746dc) */
/* WARNING: Removing unreachable block (ram,0x06b745f4) */
/* WARNING: Removing unreachable block (ram,0x06b74610) */
/* WARNING: Removing unreachable block (ram,0x06b746fc) */
/* WARNING: Removing unreachable block (ram,0x06b74700) */
/* WARNING: Removing unreachable block (ram,0x06b74704) */
/* WARNING: Removing unreachable block (ram,0x06b74618) */
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

void Merger_MergeBoard_Systems_SpawnerSystem__Tick(long param_1,undefined8 *param_2)

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
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int *piVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined8 uStack_890;
  undefined8 uStack_888;
  long lStack_880;
  undefined8 uStack_878;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 auStack_7c0 [80];
  long lStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined1 auStack_750 [168];
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined1 auStack_670 [88];
  undefined1 auStack_618 [136];
  undefined8 uStack_590;
  undefined8 uStack_588;
  long lStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined4 uStack_444;
  long lStack_440;
  undefined4 uStack_438;
  undefined1 auStack_3e8 [120];
  undefined1 auStack_370 [16];
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  
  uVar19 = tpidr_el0;
  if ((bRam0000000007e2a6f8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07830ab0);
    func_0x03280a18(PTR_DAT_07831460);
    func_0x03280a18(PTR_DAT_07831468);
    func_0x03280a18(PTR_DAT_0782fe68);
    func_0x03280a18(PTR_DAT_07831470);
    func_0x03280a18(PTR_DAT_07831478);
    func_0x03280a18(PTR_DAT_07831480);
    func_0x03280a18(PTR_DAT_07831488);
    func_0x03280a18(PTR_DAT_07830b80);
    func_0x03280a18(PTR_DAT_07831490);
    func_0x03280a18(PTR_DAT_07831498);
    bRam0000000007e2a6f8 = 1;
  }
  puVar7 = PTR_DAT_078314a8;
  puVar6 = PTR_DAT_078314a0;
  puVar5 = PTR_DAT_07831498;
  puVar3 = PTR_DAT_0782fe68;
  puVar4 = PTR_DAT_0782fe48;
  uVar18 = param_2[1];
  uVar20 = *param_2;
  uVar19 = param_2[3];
  lVar24 = param_2[2];
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
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  func_0x072ce9a0(&lStack_440,0,0xe0);
  uStack_444 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_490 = uVar20;
  uStack_488 = uVar18;
  lStack_480 = lVar24;
  uStack_478 = uVar19;
  uVar11 = func_0x03d1ad90(*(undefined8 *)puVar6);
  uVar12 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x06015d08(uVar12,0,*(undefined8 *)puVar4,0);
  uStack_588 = uStack_488;
  uStack_590 = uStack_490;
  uStack_578 = uStack_478;
  lStack_580 = lStack_480;
  func_0x03e667c4(&uStack_470,&uStack_590,uVar11,uVar12,*(undefined8 *)puVar7);
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
  func_0x04498888(&uStack_360,&uStack_470,lVar22,*(undefined8 *)puVar3);
  uVar15 = func_0x04498a38(&uStack_360,&lStack_440,*(undefined8 *)puVar4);
  if ((uVar15 & 1) == 0) {
    return;
  }
  uStack_4b0 = uVar20;
  uStack_4a8 = uVar18;
  lStack_4a0 = lVar24;
  uStack_498 = uVar19;
  uVar15 = func_0x06b993dc(*(undefined8 *)(param_1 + 0x18),&uStack_4b0,uStack_438,&uStack_444,0);
  lVar13 = lStack_440;
  if ((uVar15 & 1) == 0) {
    uVar19 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07830cc0);
    func_0x06b9a188(uVar19,lStack_440,0);
    if (lVar24 != 0) {
      func_0x03ec33e4(lVar24,uVar19,*(undefined8 *)PTR_DAT_07830cc8);
      return;
    }
  }
  else {
    func_0x072ce970(&uStack_590,&lStack_440,0xe0);
    uStack_768 = uStack_578;
    lStack_770 = lStack_580;
    uStack_760 = uStack_570;
    func_0x072ce970(auStack_670,&lStack_440,0xe0);
    func_0x072ce970(auStack_7c0,auStack_618,0x50);
    func_0x072ce970(auStack_750,&lStack_440,0xe0);
    uStack_7e8 = uStack_6a0;
    uStack_7f0 = uStack_6a8;
    uStack_7d8 = uStack_690;
    uStack_7e0 = uStack_698;
    uStack_7d0 = uStack_688;
    plVar14 = (long *)func_0x06b4e898(lVar13,&lStack_770,auStack_7c0,&uStack_7f0,0);
    lVar13 = lStack_440;
    if (plVar14 == (long *)0x0) {
      return;
    }
    auVar25 = func_0x06b9c2a4(auStack_370,0);
    if (lVar13 != 0) {
      func_0x03d1d7ec(lVar13,auVar25._0_8_,auVar25._8_8_,*(undefined8 *)PTR_DAT_07830ae8);
      uVar8 = uStack_444;
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
        uVar11 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0));
        puVar4 = PTR_DAT_0777e550;
        if (plVar23 != (long *)0x0) {
          lVar22 = *plVar23;
          lVar13 = plVar14[4];
          uVar15 = (ulong)*(ushort *)(lVar22 + 0x12e);
          if (uVar15 != 0) {
            piVar21 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
            do {
              if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_077c16b0) {
                puVar17 = (undefined8 *)(lVar22 + (long)(*piVar21 + 1) * 0x10 + 0x138);
                goto LAB_06b7515c;
              }
              uVar15 = uVar15 - 1;
              piVar21 = piVar21 + 4;
            } while (uVar15 != 0);
          }
          puVar17 = (undefined8 *)func_0x03256b10(plVar23,*(long *)PTR_DAT_077c16b0,1);
LAB_06b7515c:
          puVar3 = PTR_DAT_0774f158;
          uVar11 = (*(code *)*puVar17)(plVar23,uVar11,uVar8,4,(char)lVar13 != '\0',0,puVar17[1]);
          uStack_890 = uVar20;
          uStack_888 = uVar18;
          lStack_880 = lVar24;
          uStack_878 = uVar19;
          func_0x06b98e60(&uStack_890,uVar11,lStack_440,0);
          func_0x06b4f57c(auStack_3e8,lStack_440,0);
          bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
          plVar16 = (long *)0x0;
          if ((bVar1 <= *(byte *)(*plVar14 + 0x130)) &&
             (plVar16 = plVar14,
             *(long *)(*(long *)(*plVar14 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
            plVar16 = (long *)0x0;
          }
          uVar19 = *(undefined8 *)puVar3;
          uVar19 = func_0x06ba3134(uVar11,*(undefined8 *)(param_1 + 0x20),uVar19,uVar19,uVar19,0);
          uVar20 = *(undefined8 *)puVar3;
          uVar20 = func_0x06ba3134(lStack_440,*(undefined8 *)(param_1 + 0x20),uVar20,uVar20,uVar20,0
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
          uVar18 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe80);
          func_0x06b9aa90(uVar18,lStack_440,uVar11,uStack_438,uVar8,1,uVar20,uVar19,bVar10,bVar9,
                          uVar2,0);
          puVar4 = PTR_DAT_0782fe78;
          if (lVar24 != 0) {
            func_0x03ec33e4(lVar24,uVar18,*(undefined8 *)PTR_DAT_0782feb0);
            uVar20 = func_0x03280ca0(*(undefined8 *)puVar4);
            func_0x06b9a828(uVar20,uVar11,uVar19,0);
            if (lVar24 != 0) {
              func_0x03ec33e4(lVar24,uVar20,*(undefined8 *)PTR_DAT_0782fea8);
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

