/* Ghidra 12.1.2 bounded pseudocode; RVA 0x666DA34; bound 172 bytes; MergeEngine.ECS.Systems.Board.MergeSystem.CanMerge; status ok */


ulong MergeEngine_ECS_Systems_Board_MergeSystem__CanMerge(long param_1,long param_2,long param_3)

{
  ulong *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  
  if (((((param_2 != 0) && (param_3 != 0)) &&
       (uVar9 = func_0x0676fe64(param_1,param_2,param_3), (uVar9 & 1) != 0)) &&
      ((uVar9 = func_0x0676fef8(param_1,param_2,param_3), (uVar9 & 1) != 0 &&
       (uVar9 = func_0x0676fef8(param_1,param_3,param_2), (uVar9 & 1) != 0)))) &&
     ((uVar9 = func_0x0676fd20(param_1,param_2,param_3), (uVar9 & 1) != 0 ||
      (uVar9 = func_0x0636efd0(param_2,param_3,*(undefined8 *)(param_1 + 0x40),0), (uVar9 & 1) != 0)
      ))) {
    return 1;
  }
  plVar10 = *(long **)(param_1 + 0x40);
  if ((bRam0000000007e25418 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777bf98,param_3,plVar10,0);
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_0777a498);
    bRam0000000007e25418 = 1;
  }
  puVar5 = PTR_DAT_0777e638;
  if (((param_2 != 0) && (param_3 != 0)) &&
     ((*(int *)(param_2 + 0x28) == 3 || (*(int *)(param_3 + 0x28) == 3)))) {
    lVar6 = func_0x03ced81c(param_2,*(undefined8 *)PTR_DAT_0777e638);
    lVar7 = func_0x03ced81c(param_3,*(undefined8 *)puVar5);
    if (((lVar6 == 0) || (uVar9 = func_0x069fd714(lVar6,0), (uVar9 & 1) == 0)) &&
       ((lVar7 == 0 || (uVar9 = func_0x069fd714(lVar7,0), (uVar9 & 1) == 0)))) {
      iVar2 = *(int *)(param_2 + 0x28);
      lVar6 = param_3;
      if (iVar2 != 3) {
        lVar6 = param_2;
      }
      lVar6 = func_0x03ced81c(lVar6,*(undefined8 *)PTR_DAT_0777bf98);
      if (lVar6 != 0) {
        if (iVar2 != 3) {
          param_2 = param_3;
        }
        uVar9 = func_0x055ea870(*(undefined8 *)(lVar6 + 0x30),*(undefined8 *)(param_2 + 0x30),0);
        if ((uVar9 & 1) == 0) {
          return 0;
        }
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          uVar12 = *(undefined8 *)(lVar6 + 0x30);
          uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar9 != 0) {
            piVar11 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777a498) {
                puVar8 = (undefined8 *)(lVar7 + (long)(*piVar11 + 0xd) * 0x10 + 0x138);
                goto code_r0x0636f4ac;
              }
              uVar9 = uVar9 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a498,0xd);
code_r0x0636f4ac:
          lVar6 = (*(code *)*puVar8)(plVar10,uVar12,puVar8[1]);
          return (ulong)(lVar6 != 0);
        }
      }
      func_0x03280cac();
      puVar5 = PTR_DAT_077e64f0;
      if ((bRam0000000007e25419 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077e64f0);
        bRam0000000007e25419 = 1;
      }
      uVar12 = func_0x03280ca0(*(undefined8 *)puVar5);
      func_0x057da5fc(uVar12,0);
      **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar12;
      uVar9 = *(ulong *)(*(long *)puVar5 + 0xb8);
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)((uVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << (uVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return uVar9;
    }
  }
  return 0;
}

