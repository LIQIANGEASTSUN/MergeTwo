/* Ghidra 12.1.2 native pseudocode; RVA 0x6A29AFC; MergeEngine.Configuration.Definitions.ItemMultiple.CompareItems; status ok */


/* WARNING: Possible PIC construction at 0x0611f304: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0611f308) */

undefined8 *
MergeEngine_Configuration_Definitions_ItemMultiple__CompareItems(long param_1,long *param_2)

{
  ulong *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if ((bRam0000000007e2a421 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cdb78);
    bRam0000000007e2a421 = 1;
  }
  if (param_2 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_077cdb78 + 0x130);
    if ((bVar2 <= *(byte *)(*param_2 + 0x130)) &&
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)PTR_DAT_077cdb78))
    {
      if ((param_2 != (long *)0x0) && (plVar7 = *(long **)(param_1 + 0x60), plVar7 != (long *)0x0))
      {
                    /* WARNING: Could not recover jumptable at 0x06b29b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        puVar8 = (undefined8 *)
                 (**(code **)(*plVar7 + 0x268))
                           (plVar7,param_2[0xc],*(undefined8 *)(*plVar7 + 0x270));
        return puVar8;
      }
      lVar9 = func_0x03280cac();
      puVar5 = PTR_DAT_077730b8;
      if ((bRam0000000007e2a422 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0782f0d0);
        func_0x03280a18(PTR_DAT_077730b8);
        bRam0000000007e2a422 = 1;
      }
      puVar6 = PTR_DAT_0782f0d0;
      lVar10 = *(long *)puVar5;
      if (*(int *)(lVar10 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar10 = *(long *)puVar5;
      }
      uVar13 = *(undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x40);
      uVar11 = func_0x0611fc10(1,0);
      uVar12 = *(undefined8 *)puVar6;
      func_0x057da5fc(lVar9,0,uVar11,0,0);
      puVar8 = (undefined8 *)(lVar9 + 0x48);
      *puVar8 = uVar13;
      if (iRam00000000080486b8 != 0) {
        puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      return puVar8;
    }
  }
  return (undefined8 *)0x0;
}

