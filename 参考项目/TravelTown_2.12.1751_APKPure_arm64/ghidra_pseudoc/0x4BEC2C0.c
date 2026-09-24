/* Ghidra 12.1.2 native pseudocode; RVA 0x4BEC2C0; MergeEngine.ECS.Systems.Items.BaseItemSystem<T>.ProcessComponents; status ok */


ulong MergeEngine_ECS_Systems_Items_BaseItemSystem_T___ProcessComponents
                (long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong extraout_x1;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x23;
  undefined1 auVar9 [12];
  
  if ((bRam0000000007e1adfd & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1adfd = 1;
  }
  plVar2 = (long *)(**(code **)(*param_1 + 0x248))
                             (param_1,param_2,*(undefined8 *)(*param_1 + 0x250));
  if (plVar2 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = func_0x0325681c(lVar5);
    }
    lVar6 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04cec390;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(plVar2,lVar5,0);
LAB_04cec390:
    unaff_x23 = (long *)PTR_DAT_0774e8c8;
    param_2 = (long *)(*(code *)*puVar3)(plVar2,puVar3[1]);
    puVar1 = PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      do {
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04cec400;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_04cec400:
        uVar7 = (*(code *)*puVar3)(param_2,puVar3[1]);
        if ((uVar7 & 1) == 0) {
          param_3 = 0;
          goto LAB_04cec4a8;
        }
        lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = func_0x0325681c(lVar5);
        }
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_04cec478;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)func_0x03256b10(param_2,lVar5,0);
LAB_04cec478:
        uVar4 = (*(code *)*puVar3)(param_2,puVar3[1]);
        (**(code **)(*param_1 + 600))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x260));
      } while( true );
    }
  }
  func_0x03280cac();
  while( true ) {
    auVar9 = func_0x03280ca4(param_3);
    if (auVar9._8_4_ != 1) break;
    plVar2 = (long *)func_0x072ce910(auVar9._0_8_);
    param_3 = *plVar2;
    uVar7 = func_0x072ce920();
LAB_04cec4a8:
    if (param_2 != (long *)0x0) {
      lVar5 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04cec4f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)func_0x03256b10(param_2,*unaff_x23,0);
LAB_04cec4f8:
      uVar7 = (*(code *)*puVar3)(param_2,puVar3[1]);
    }
    if (param_3 == 0) {
      return uVar7;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_04cec704;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)func_0x03256b10(param_2,*unaff_x23,0);
LAB_04cec704:
    (*(code *)*puVar3)(param_2,puVar3[1]);
  }
  func_0x03365958(auVar9._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return extraout_x1;
}

