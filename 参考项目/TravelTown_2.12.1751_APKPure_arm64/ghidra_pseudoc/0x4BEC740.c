/* Ghidra 12.1.2 native pseudocode; RVA 0x4BEC740; MergeEngine.ECS.Systems.Items.BaseItemSystem<T>.ProcessComponents; status ok */


/* WARNING: Type propagation algorithm not settling */

ulong MergeEngine_ECS_Systems_Items_BaseItemSystem_T___ProcessComponents
                (long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong extraout_x1;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long *unaff_x27;
  undefined1 auVar13 [12];
  undefined8 *apuStack_80 [3];
  long lStack_68;
  
  lVar9 = tpidr_el0;
  lStack_68 = *(long *)(lVar9 + 0x28);
  if ((bRam0000000007e1adfe & 1) == 0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    bRam0000000007e1adfe = 1;
  }
  lVar2 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38);
  uVar7 = *(uint *)(lVar2 + 0xfc);
  uVar12 = (ulong)uVar7;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = func_0x0325681c();
    uVar7 = *(uint *)(lVar2 + 0xfc);
  }
  uVar10 = uVar12 + 0xf & 0x1fffffff0;
  puVar5 = (undefined8 *)
           ((long)apuStack_80 + (-uVar10 - ((ulong)(uVar7 + 0x10) + 0xf & 0x1fffffff0)));
  lVar2 = (long)puVar5 - uVar10;
  func_0x072ce9a0(lVar2,0,uVar12);
  plVar3 = (long *)(**(code **)(*param_1 + 0x248))
                             (param_1,param_2,*(undefined8 *)(*param_1 + 0x250));
  if (plVar3 == (long *)0x0) {
    func_0x03280cac();
  }
  else {
    lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = func_0x0325681c(lVar6);
    }
    lVar8 = *plVar3;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar6) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_04cec898;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,lVar6,0);
LAB_04cec898:
    unaff_x27 = (long *)PTR_DAT_0774e8c8;
    param_2 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      do {
        lVar6 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_04cec908;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_04cec908:
        uVar10 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if ((uVar10 & 1) == 0) {
          param_3 = 0;
          goto LAB_04cec9fc;
        }
        lVar6 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x28);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = func_0x0325681c(lVar6);
        }
        lVar8 = *param_2;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == lVar6) {
              lVar6 = lVar8 + (long)*piVar11 * 0x10 + 0x138;
              goto LAB_04cec980;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        lVar6 = func_0x03256b10(param_2,lVar6,0);
LAB_04cec980:
        lVar6 = *(long *)(lVar6 + 8);
        apuStack_80[1] = puVar5;
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,param_2,apuStack_80 + 1,puVar5)
        ;
        func_0x072ce970(lVar2,puVar5,uVar12);
        func_0x072ce970(puVar5,lVar2,uVar12);
        apuStack_80[1] = puVar5;
        if (-1 < *(int *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x38) + 0x28)) {
          apuStack_80[1] = (undefined8 *)*puVar5;
        }
        lVar6 = *(long *)(*param_1 + 0x260);
        (**(code **)(lVar6 + 0x10))(*(undefined8 *)(lVar6 + 8),lVar6,param_1,apuStack_80 + 1);
      } while( true );
    }
  }
  func_0x03280cac();
LAB_04ceca94:
  func_0x03280ca4(param_3);
  do {
    auVar13 = func_0x072ce990();
    if (auVar13._8_4_ != 1) {
      if (param_2 == (long *)0x0) goto LAB_04cecc30;
      lVar9 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar12 == 0) goto LAB_04cecc08;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    plVar3 = (long *)func_0x072ce910(auVar13._0_8_);
    param_3 = *plVar3;
    uVar10 = func_0x072ce920();
LAB_04cec9fc:
    if (param_2 != (long *)0x0) {
      lVar2 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar12 != 0) {
        piVar11 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x27) {
            puVar5 = (undefined8 *)(lVar2 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_04ceca4c;
          }
          uVar12 = uVar12 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x27,0);
LAB_04ceca4c:
      uVar10 = (*(code *)*puVar5)(param_2,puVar5[1]);
    }
    if (param_3 != 0) goto LAB_04ceca94;
    if (*(long *)(lVar9 + 0x28) == lStack_68) {
      return uVar10;
    }
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar11 = piVar11 + 4;
    if (uVar12 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x27) {
      puVar5 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_04cecc24;
    }
  }
LAB_04cecc08:
  puVar5 = (undefined8 *)func_0x03256b10(param_2,*unaff_x27,0);
LAB_04cecc24:
  (*(code *)*puVar5)(param_2,puVar5[1]);
LAB_04cecc30:
  func_0x03365958(auVar13._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  return extraout_x1;
}

