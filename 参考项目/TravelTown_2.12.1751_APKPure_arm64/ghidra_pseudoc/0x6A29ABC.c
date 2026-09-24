/* Ghidra 12.1.2 native pseudocode; RVA 0x6A29ABC; MergeEngine.Configuration.Definitions.ItemMultiple.Equals; status ok */


/* WARNING: Possible PIC construction at 0x0611f304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0611f308) */

undefined8 * MergeEngine_Configuration_Definitions_ItemMultiple__Equals(long param_1,long *param_2)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = func_0x0611f55c(param_1,param_2,0);
  if ((uVar7 & 1) == 0) {
    return (undefined8 *)0x0;
  }
  if ((bRam0000000007e2a421 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cdb78);
    bRam0000000007e2a421 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_077cdb78 + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_077cdb78))
    {
      if ((param_2 != (long *)0x0) && (plVar8 = *(long **)(param_1 + 0x60), plVar8 != (long *)0x0))
      {
                    /* WARNING: Could not recover jumptable at 0x06b29b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar9 = (undefined8 *)
                 (**(code **)(*plVar8 + 0x268))
                           (plVar8,param_2[0xc],*(undefined8 *)(*plVar8 + 0x270));
        return puVar9;
      }
      lVar10 = func_0x03280cac();
      puVar5 = PTR_DAT_077730b8;
      if ((bRam0000000007e2a422 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0782f0d0);
        func_0x03280a18(PTR_DAT_077730b8);
        bRam0000000007e2a422 = 1;
      }
      puVar6 = PTR_DAT_0782f0d0;
      lVar11 = *(long *)puVar5;
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar11 = *(long *)puVar5;
      }
      uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0xb8) + 0x40);
      uVar12 = func_0x0611fc10(1,0);
      uVar13 = *(undefined8 *)puVar6;
      func_0x057da5fc(lVar10,0,uVar12,0,0);
      puVar9 = (undefined8 *)(lVar10 + 0x48);
      *puVar9 = uVar14;
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return puVar9;
    }
  }
  return (undefined8 *)0x0;
}

