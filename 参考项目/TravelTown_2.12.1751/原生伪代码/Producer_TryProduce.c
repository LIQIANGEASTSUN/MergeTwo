// Producer_TryProduce RVA 0x6A73634
// 06b73634


ulong target_Producer_TryProduce
                (long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d0 [80];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((bRam0000000007e2a6f3 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077c16b0);
    func_0x03280a18(PTR_DAT_0782fe78);
    func_0x03280a18(PTR_DAT_0782fe80);
    func_0x03280a18(PTR_DAT_0782fea8);
    func_0x03280a18(PTR_DAT_0782feb0);
    func_0x03280a18(PTR_DAT_0777e550);
    func_0x03280a18(PTR_DAT_0774f158);
    bRam0000000007e2a6f3 = 1;
  }
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_68 = param_5[3];
  uStack_70 = param_5[2];
  func_0x072ce970(auStack_d0,param_6,0x50);
  uStack_f8 = param_7[1];
  uStack_100 = *param_7;
  uStack_e8 = param_7[3];
  uStack_f0 = param_7[2];
  uStack_e0 = param_7[4];
  plVar7 = (long *)func_0x06b4eba8(param_3,&uStack_80,auStack_d0,&uStack_100,
                                   *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0
                                  );
  if (plVar7 == (long *)0x0) {
LAB_06b7395c:
    return (ulong)(plVar7 != (long *)0x0);
  }
  plVar8 = (long *)plVar7[2];
  if (plVar8 != (long *)0x0) {
    plVar18 = *(long **)(param_1 + 0x18);
    uVar9 = (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    puVar4 = PTR_DAT_0777e550;
    if (plVar18 != (long *)0x0) {
      lVar14 = *plVar18;
      lVar17 = plVar7[4];
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_077c16b0) {
            puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 1) * 0x10 + 0x138);
            goto LAB_06b737ac;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)func_0x03256b10(plVar18,*(long *)PTR_DAT_077c16b0,1);
LAB_06b737ac:
      puVar3 = PTR_DAT_0774f158;
      uVar9 = (*(code *)*puVar10)(plVar18,uVar9,param_8,8,(char)lVar17 != '\0',0,puVar10[1]);
      uStack_118 = param_2[1];
      uStack_120 = *param_2;
      uStack_108 = param_2[3];
      uStack_110 = param_2[2];
      func_0x06b98e60(&uStack_120,uVar9,param_3,0);
      func_0x06b4f57c(param_6,param_3,0);
      bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
      plVar8 = (long *)0x0;
      if ((bVar1 <= *(byte *)(*plVar7 + 0x130)) &&
         (plVar8 = plVar7,
         *(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
        plVar8 = (long *)0x0;
      }
      uVar12 = *(undefined8 *)puVar3;
      uVar12 = func_0x06ba3134(param_3,*(undefined8 *)(param_1 + 0x20),uVar12,uVar12,uVar12,0);
      uVar13 = *(undefined8 *)puVar3;
      uVar13 = func_0x06ba3134(uVar9,*(undefined8 *)(param_1 + 0x20),uVar13,uVar13,uVar13,0);
      lVar17 = param_2[2];
      if (plVar8 == (long *)0x0) {
        bVar6 = false;
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)((long)plVar8 + 0x29) != '\0';
        bVar6 = (char)plVar8[5] != '\0';
      }
      uVar2 = *(undefined1 *)((long)plVar7 + 0x22);
      uVar11 = func_0x03280ca0(*(undefined8 *)PTR_DAT_0782fe80);
      func_0x06b9aa90(uVar11,param_3,uVar9,param_4,param_8,0,uVar12,uVar13,bVar6,bVar5,uVar2,0);
      puVar4 = PTR_DAT_0782fe78;
      if (lVar17 != 0) {
        func_0x03ec33e4(lVar17,uVar11,*(undefined8 *)PTR_DAT_0782feb0);
        lVar17 = param_2[2];
        uVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
        func_0x06b9a828(uVar12,uVar9,uVar13,0);
        if (lVar17 != 0) {
          func_0x03ec33e4(lVar17,uVar12,*(undefined8 *)PTR_DAT_0782fea8);
          goto LAB_06b7395c;
        }
      }
    }
  }
  uVar15 = func_0x03280cac();
  return uVar15;
}

