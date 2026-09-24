/* Ghidra 12.1.2 native pseudocode; RVA 0x679C938; MergeEngine.ECS.Systems.Items.Producers.SpawnerSystem.SpawnInternal; status ok */

ulong MergeEngine_ECS_Systems_Items_Producers_SpawnerSystem__SpawnInternal
                (long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  long lStack_68;
  undefined8 uStack_58;
  
  if ((bRam0000000007e28dc0 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077e6760);
    func_0x03280a18(PTR_DAT_077d75b8);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_078108e0);
    func_0x03280a18(PTR_DAT_07810388);
    func_0x03280a18(PTR_DAT_07810730);
    func_0x03280a18(PTR_DAT_07810988);
    bRam0000000007e28dc0 = 1;
  }
  puVar2 = PTR_DAT_07810388;
  puVar1 = PTR_DAT_077e6760;
  uStack_58 = 0;
  lStack_68 = 0;
  if (param_2 != 0) {
    lVar3 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_077d75b8);
    uVar4 = func_0x03ced81c(param_2,*(undefined8 *)puVar1);
    lVar5 = func_0x03280ca0(*(undefined8 *)puVar2);
    func_0x060d39e0(lVar5,0);
    puVar1 = PTR_DAT_078108e0;
    plVar11 = *(long **)(param_1 + 0xb0);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_078108e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0689ca84;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_078108e0,0);
LAB_0689ca84:
      puVar2 = PTR_DAT_07810988;
      uVar8 = (*(code *)*puVar6)(plVar11,lVar3,&uStack_58,&lStack_68,puVar6[1]);
      uVar10 = uStack_58;
      if (((uVar8 & 1) != 0) && (uVar10 = param_3, (param_4 & 1) != 0)) {
        param_3 = uStack_58;
        uVar10 = uStack_58;
      }
      uStack_58 = uVar10;
      func_0x046330d4(param_1,param_3,param_2,uVar4,lVar5,1,0,lStack_68,*(undefined8 *)puVar2);
      if (lStack_68 != 0) {
        if ((*(long *)(param_1 + 0x90) == 0) ||
           (lVar7 = MergeEngine_ECS_Systems_Board_BoardSystem__GetItem
                              (*(long *)(param_1 + 0x90),uStack_58,0), lVar7 == 0))
        goto LAB_0689cbcc;
        plVar11 = *(long **)(param_1 + 0xb0);
        uVar4 = func_0x03ced81c(lVar7,*(undefined8 *)PTR_DAT_077d7588);
        if ((lVar3 == 0) || (plVar11 == (long *)0x0)) goto LAB_0689cbcc;
        lVar7 = *plVar11;
        uVar10 = *(undefined8 *)(lVar3 + 0x30);
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar1) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
              goto LAB_0689cb78;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)puVar1,1);
LAB_0689cb78:
        (*(code *)*puVar6)(plVar11,uVar4,uVar10,puVar6[1]);
      }
      if ((lVar5 != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
        uVar8 = func_0x03e4062c(*(long *)(param_1 + 0xa0),*(undefined8 *)(lVar5 + 0x10),
                                *(undefined8 *)PTR_DAT_07810730);
        return uVar8;
      }
    }
  }
LAB_0689cbcc:
  auVar12 = func_0x03280cac();
  uVar4 = auVar12._8_8_;
  if ((bRam0000000007e28dc1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    bRam0000000007e28dc1 = 1;
  }
  plVar11 = *(long **)(auVar12._0_8_ + 0x90);
  if ((plVar11 != (long *)0x0) &&
     (plVar11 = (long *)(**(code **)(*plVar11 + 0x208))(plVar11,*(undefined8 *)(*plVar11 + 0x210)),
     plVar11 != (long *)0x0)) {
    lVar3 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077cc678) {
          puVar6 = (undefined8 *)(lVar3 + (long)(*piVar9 + 0x18) * 0x10 + 0x138);
          goto LAB_0689cc78;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077cc678,0x18);
LAB_0689cc78:
    uVar8 = (*(code *)*puVar6)(plVar11,uVar4,puVar6[1]);
    if ((uVar8 & 1) != 0) {
      return 0;
    }
    lVar3 = *(long *)(auVar12._0_8_ + 0x90);
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x88);
      if (lVar3 == 0) {
        func_0x03280cac(0,uVar4,0);
        lVar3 = MergeEngine_ECS_Systems_Board_BoardSystem__GetUnlockedItemById();
        return (ulong)(lVar3 != 0);
      }
      lVar3 = func_0x06a02444(lVar3,uVar4,0);
      return (ulong)(lVar3 == 0);
    }
  }
  uVar8 = func_0x03280cac();
  puVar1 = PTR_DAT_07810990;
  if ((bRam0000000007e28dc2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07810990);
    bRam0000000007e28dc2 = 1;
  }
  uVar4 = *(undefined8 *)puVar1;
  return uVar8;
}

