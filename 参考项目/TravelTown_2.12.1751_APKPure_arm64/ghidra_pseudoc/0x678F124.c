/* Ghidra 12.1.2 native pseudocode; RVA 0x678F124; MergeEngine.ECS.Systems.Items.ExpendableSystem.UpdateProducersCreatedTimestamp; status ok */


void MergeEngine_ECS_Systems_Items_ExpendableSystem__UpdateProducersCreatedTimestamp
               (long *param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long *unaff_x23;
  undefined1 auVar13 [12];
  undefined8 uStack_78;
  code *pcStack_70;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar6 = param_3;
  if ((bRam0000000007e28d5b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98);
    func_0x03280a18(PTR_DAT_0777a920);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07779820);
    func_0x03280a18(PTR_DAT_0774ee08);
    bRam0000000007e28d5b = 1;
  }
  puVar1 = PTR_DAT_0777a498;
  plVar12 = (long *)param_1[10];
  if (plVar12 != (long *)0x0) {
    lVar6 = *plVar12;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a498) {
          puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
          goto LAB_0688f1f0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar2 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0x14);
LAB_0688f1f0:
    lVar6 = puVar2[1];
    plVar3 = (long *)(*(code *)*puVar2)(plVar12,param_2);
    if (plVar3 != (long *)0x0) {
      lVar7 = *plVar3;
      plVar12 = (long *)param_1[10];
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_07779820) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0688f260;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      lVar6 = 0;
      puVar2 = (undefined8 *)func_0x03256b10(plVar3);
LAB_0688f260:
      plVar4 = (long *)(*(code *)*puVar2)(plVar3,puVar2[1]);
      unaff_x23 = plVar3;
      if (plVar12 != (long *)0x0) {
        lVar7 = *plVar12;
        lVar6 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
              goto LAB_0688f2c4;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)func_0x03256b10(plVar12,lVar6,4);
LAB_0688f2c4:
        lVar6 = puVar2[1];
        plVar3 = (long *)(*(code *)*puVar2)(plVar12,plVar4);
        if (plVar3 == (long *)0x0) {
          return;
        }
        param_1 = (long *)param_1[10];
        unaff_x23 = plVar4;
        if (param_1 != (long *)0x0) {
          lVar7 = *param_1;
          lVar6 = *(long *)puVar1;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == lVar6) {
                puVar2 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0x20) * 0x10 + 0x138);
                goto LAB_0688f334;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar2 = (undefined8 *)func_0x03256b10(param_1,lVar6,0x20);
LAB_0688f334:
          lVar6 = puVar2[1];
          uVar8 = (*(code *)*puVar2)(param_1,plVar3);
          if ((uVar8 & 1) == 0) {
            return;
          }
          plVar12 = plVar3;
          if ((((param_2 != 0) &&
               (lVar7 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777bf98), param_3 != 0)) &&
              (lVar5 = func_0x03d20d84(param_3,*(undefined8 *)PTR_DAT_0777a920), param_2 = lVar7,
              lVar7 != 0)) && (param_3 = 0, lVar5 != 0)) {
            uVar10 = *(undefined8 *)(lVar7 + 0x48);
            uVar11 = *(undefined8 *)(lVar5 + 0x48);
            if (*(int *)(*(long *)PTR_DAT_0774ee08 + 0xe0) == 0) {
              func_0x03280b8c();
            }
            uVar10 = func_0x0579758c(uVar10,uVar11,0);
            *(undefined8 *)(lVar5 + 0x48) = uVar10;
            return;
          }
        }
      }
    }
  }
  auVar13 = func_0x03280cac();
  lVar7 = auVar13._0_8_;
  pcStack_70 = MergeEngine_ECS_Systems_Items_ExpendableSystem__SetExpendableTrackingData;
  plStack_68 = unaff_x23;
  plStack_60 = plVar12;
  plStack_58 = param_1;
  lStack_50 = param_2;
  lStack_48 = param_3;
  if ((bRam0000000007e28d59 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078103c0);
    func_0x03280a18(PTR_DAT_0777a498);
    func_0x03280a18(PTR_DAT_07750da0);
    bRam0000000007e28d59 = 1;
  }
  if ((*(long *)(lVar7 + 0x88) != 0) &&
     (lVar5 = *(long *)(*(long *)(lVar7 + 0x88) + 0x30), lVar5 != 0)) {
    lVar5 = *(long *)(lVar5 + 0x20);
    if (lVar5 == 0) {
      lVar5 = func_0x03280ca0(*(undefined8 *)PTR_DAT_078103c0);
      func_0x06a005e4(lVar5,0);
    }
    if (auVar13._8_4_ == 0x10) {
      if (((lVar6 == 0) || (plVar12 = *(long **)(lVar6 + 0x10), plVar12 == (long *)0x0)) ||
         (uVar10 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0)),
         lVar5 == 0)) goto SUB_057da5fc;
      *(undefined8 *)(lVar5 + 0x28) = uVar10;
      func_0x032809c4();
    }
    else if (auVar13._8_4_ == 4) {
      if (((lVar6 == 0) || (plVar12 = *(long **)(lVar6 + 0x10), plVar12 == (long *)0x0)) ||
         (uVar10 = (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0)),
         lVar5 == 0)) goto SUB_057da5fc;
      func_0x06a00508(lVar5,uVar10,0);
    }
    else if (lVar5 == 0) goto SUB_057da5fc;
    *(undefined1 *)(lVar5 + 0x18) = 1;
    if (param_4 != 0) {
      uStack_78 = 0;
      func_0x0437b6e0(&uStack_78,*(undefined4 *)(param_4 + 0x30),*(undefined8 *)PTR_DAT_07750da0);
      *(undefined8 *)(lVar5 + 0x1c) = uStack_78;
      plVar12 = *(long **)(lVar7 + 0x50);
      if (plVar12 != (long *)0x0) {
        lVar6 = *plVar12;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a498) {
              puVar2 = (undefined8 *)(lVar6 + (long)(*piVar9 + 0x14) * 0x10 + 0x138);
              goto LAB_0688f564;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar2 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_0777a498,0x14);
LAB_0688f564:
        uVar10 = (*(code *)*puVar2)(plVar12,param_4,puVar2[1]);
        *(undefined8 *)(lVar5 + 0x10) = uVar10;
        func_0x032809c4();
        if ((*(long *)(lVar7 + 0x88) != 0) &&
           (lVar6 = *(long *)(*(long *)(lVar7 + 0x88) + 0x30), lVar6 != 0)) {
          plVar12 = (long *)(lVar6 + 0x20);
          *plVar12 = lVar5;
          func_0x032809c4(plVar12,lVar5);
          return;
        }
      }
    }
  }
SUB_057da5fc:
  func_0x03280cac();
  return;
}

