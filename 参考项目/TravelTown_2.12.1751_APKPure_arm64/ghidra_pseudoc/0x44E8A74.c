/* Ghidra 12.1.2 native pseudocode; RVA 0x44E8A74; MergeEngine.ECS.Components.SerializableComponent<TSerializable>.Deserialize; status ok */


/* WARNING: Removing unreachable block (ram,0x04f34dd0) */
/* WARNING: Removing unreachable block (ram,0x04f34dec) */

void MergeEngine_ECS_Components_SerializableComponent_TSerializable___Deserialize
               (long *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  if ((bRam0000000007e18ffa & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777b110);
    bRam0000000007e18ffa = 1;
  }
  if ((param_1 == (long *)0x0) || (plVar10 = (long *)param_1[3], plVar10 == (long *)0x0)) {
    auVar12 = func_0x03280cac();
    lVar7 = **(long **)(*(long *)(**(long **)(*(long *)(auVar12._8_8_ + 0x20) + 0xc0) + 0x20) + 0xc0
                       );
    func_0x057da5fc(auVar12._0_8_,0);
    lVar7 = func_0x03c56b54(*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x18));
    if (lVar7 == 0) {
      return;
    }
    puVar6 = (undefined8 *)(auVar12._0_8_ + 0x30);
    *puVar6 = 0;
    if (iRam00000000080486b8 != 0) {
      puVar1 = (ulong *)(((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    return;
  }
  lVar7 = *plVar10;
  lVar11 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x50);
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)(lVar11 + 0x20)) {
        lVar7 = lVar7 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar11 + 0x50)) * 0x10 + 0x138;
        goto LAB_045e8b18;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  lVar7 = func_0x03256b10(plVar10);
LAB_045e8b18:
  puVar4 = PTR_DAT_0777b110;
  lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),lVar11);
  uVar5 = (**(code **)(lVar7 + 8))(plVar10,param_2,lVar7);
  func_0x02f17738(param_1,*(undefined8 *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80),
                  uVar5);
  plVar10 = (long *)func_0x03280a38(param_1,*(undefined8 *)
                                             (**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80))
  ;
  if (*plVar10 == 0) {
    uVar5 = func_0x03d754d0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x10));
    func_0x02f17738(param_1,*(undefined8 *)(**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80),
                    uVar5);
  }
  puVar6 = (undefined8 *)
           func_0x03280a38(param_1,*(undefined8 *)
                                    (**(long **)(*(long *)(param_3 + 0x20) + 0xc0) + 0x80));
  uVar5 = *puVar6;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  func_0x03e6e2e8(uVar5,0,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x045e8c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
  return;
}

