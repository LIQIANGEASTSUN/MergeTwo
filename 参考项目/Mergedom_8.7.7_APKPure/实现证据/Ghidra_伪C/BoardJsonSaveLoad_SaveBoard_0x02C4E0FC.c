
void Recovered_BoardJsonSaveLoad_SaveBoard_0x02C4E0FC(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  if ((bRam0000000006812dba & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063ff300);
    func_0x02ad6de0(PTR_DAT_063ff308);
    func_0x02ad6de0(PTR_DAT_063ff280);
    func_0x02ad6de0(PTR_DAT_063ff310);
    func_0x02ad6de0(PTR_DAT_063ff318);
    func_0x02ad6de0(PTR_DAT_063ff320);
    func_0x02ad6de0(PTR_DAT_063ff2f8);
    bRam0000000006812dba = 1;
  }
  if (((*(long *)(param_1 + 0x10) != 0) &&
      (lVar3 = func_0x03b12794(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_063ff318),
      puVar2 = PTR_DAT_063ff320, puVar1 = PTR_DAT_063ff2f8, lVar3 != 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    func_0x03b12fd0(*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_063ff310);
    uVar4 = func_0x05068da0(*(undefined8 *)puVar1,uVar6,0);
    uVar5 = func_0x0380f004(param_2,uVar4,*(undefined8 *)puVar2);
    lVar3 = *(long *)(param_1 + 0x10);
    if ((uVar5 & 1) == 0) {
      if (lVar3 != 0) {
        func_0x03b12a34(lVar3,uVar6,*(undefined8 *)PTR_DAT_063ff280);
        return;
      }
    }
    else if (lVar3 != 0) {
      func_0x03b12918(lVar3,uVar6,*(undefined8 *)PTR_DAT_063ff308);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

