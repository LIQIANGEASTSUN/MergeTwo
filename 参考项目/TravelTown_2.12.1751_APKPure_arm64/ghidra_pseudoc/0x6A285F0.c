/* Ghidra 12.1.2 native pseudocode; RVA 0x6A285F0; MergeEngine.Configuration.Definitions.Combination.ToString; status ok */


/* WARNING: Removing unreachable block (ram,0x06b2892c) */
/* WARNING: Removing unreachable block (ram,0x06b2893c) */
/* WARNING: Removing unreachable block (ram,0x06b28960) */
/* WARNING: Removing unreachable block (ram,0x06b28964) */

void MergeEngine_Configuration_Definitions_Combination__ToString(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x22;
  undefined1 auVar16 [12];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_0774ee28;
  if ((bRam0000000007e2a40c & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782f090);
    func_0x03280a18(PTR_DAT_077d7340);
    func_0x03280a18(PTR_DAT_077d7348);
    func_0x03280a18(PTR_DAT_0782f098);
    func_0x03280a18(PTR_DAT_077d7350);
    func_0x03280a18(PTR_DAT_0782f0a0);
    func_0x03280a18(PTR_DAT_077d7360);
    func_0x03280a18(PTR_DAT_0782f0a8);
    func_0x03280a18(PTR_DAT_0774ee28);
    func_0x03280a18(PTR_DAT_07751738);
    func_0x03280a18(PTR_DAT_0782f0b0);
    func_0x03280a18(PTR_DAT_0782f0b8);
    func_0x03280a18(PTR_DAT_0774f768);
    func_0x03280a18(PTR_DAT_0782f0c0);
    bRam0000000007e2a40c = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  plStack_70 = (long *)0x0;
  uStack_98 = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  plVar9 = (long *)func_0x03280ca0(*(undefined8 *)puVar1);
  func_0x056058a8(plVar9,0);
  puVar1 = PTR_DAT_0782f0c0;
  puVar15 = (undefined8 *)0x7e2a000;
  if (plVar9 != (long *)0x0) {
    func_0x056076bc(plVar9,*(undefined8 *)PTR_DAT_0782f0b8,0);
    func_0x056076bc(plVar9,*(undefined8 *)puVar1,0);
    puVar8 = PTR_DAT_0782f0b0;
    puVar7 = PTR_DAT_0782f0a8;
    puVar6 = PTR_DAT_0782f098;
    puVar5 = PTR_DAT_0782f090;
    puVar4 = PTR_DAT_077d7348;
    puVar3 = PTR_DAT_077d7340;
    puVar14 = (undefined8 *)PTR_DAT_07751738;
    puVar2 = PTR_DAT_0774f768;
    puVar15 = (undefined8 *)puVar1;
    if (*(long *)(param_1 + 0x20) != 0) {
      func_0x04145068(&uStack_b0,*(long *)(param_1 + 0x20),*(undefined8 *)PTR_DAT_077d7360);
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      plStack_70 = plStack_a0;
      while (uVar10 = func_0x051159b4(&uStack_80,*(undefined8 *)puVar4), puVar15 = puVar14,
            unaff_x22 = (undefined8 *)puVar5, (uVar10 & 1) != 0) {
        if (plStack_70 == (long *)0x0) {
          func_0x03280cac();
          goto LAB_06b288b0;
        }
        uVar11 = (**(code **)(*plStack_70 + 0x1c8))(plStack_70,*(undefined8 *)(*plStack_70 + 0x1d0))
        ;
        func_0x056076bc(plVar9,uVar11,0);
        func_0x056076bc(plVar9,*(undefined8 *)puVar2,0);
      }
      func_0x051159b0(&uStack_80,*(undefined8 *)puVar3);
      func_0x056076bc(plVar9,*(undefined8 *)puVar8,0);
      if (*(long *)(param_1 + 0x28) != 0) {
        func_0x04145068(&uStack_98,*(long *)(param_1 + 0x28),*(undefined8 *)puVar7);
        while (uVar10 = func_0x051159b4(&uStack_98,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
          if (lStack_88 == 0) goto LAB_06b288b0;
          plVar12 = *(long **)(lStack_88 + 0x18);
          if (plVar12 == (long *)0x0) goto LAB_06b288b4;
          uVar11 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
          func_0x056076bc(plVar9,uVar11,0);
          func_0x056076bc(plVar9,*(undefined8 *)puVar2,0);
        }
        func_0x051159b0(&uStack_98,*(undefined8 *)puVar5);
        goto LAB_06b2886c;
      }
    }
  }
  goto LAB_06b288b8;
LAB_06b288b0:
  func_0x03280cac();
LAB_06b288b4:
  func_0x03280cac();
LAB_06b288b8:
  auVar16 = func_0x03280cac();
  uVar11 = auVar16._0_8_;
  if (auVar16._8_4_ == 1) {
    plVar12 = (long *)func_0x072ce910();
    lVar13 = *plVar12;
    func_0x072ce920();
    func_0x051159b0(&uStack_98,*unaff_x22);
    puVar14 = puVar15;
    if (lVar13 == 0) {
LAB_06b2886c:
      func_0x056076bc(plVar9,*puVar14,0);
      (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      return;
    }
    uVar11 = func_0x03280ca4(lVar13);
  }
  func_0x051159b0(&uStack_98,*unaff_x22);
  func_0x03365958(uVar11);
  func_0x03280ca4(uStack_58);
  func_0x02f09514();
  return;
}

