
long Recovered_BoardJsonSaveLoad_LoadBoardData_0x02C4DF50(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000006812db9 & 1) == 0) {
    func_0x02ad6de0(PTR_DAT_063ff2d0);
    func_0x02ad6de0(PTR_DAT_063ff2d8);
    func_0x02ad6de0(PTR_DAT_063ff2e0);
    func_0x02ad6de0(PTR_DAT_063ff2e8);
    func_0x02ad6de0(PTR_DAT_063ff2f0);
    func_0x02ad6de0(PTR_DAT_063ff2c8);
    func_0x02ad6de0(PTR_DAT_063ff2f8);
    bRam0000000006812db9 = 1;
  }
  puVar5 = PTR_DAT_063ff2f8;
  puVar4 = PTR_DAT_063ff2f0;
  puVar3 = PTR_DAT_063ff2d8;
  puVar2 = PTR_DAT_063ff2d0;
  puVar1 = PTR_DAT_063ff2c8;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x03b12e44(&uStack_70,*(long *)(param_1 + 0x10),*(undefined8 *)PTR_DAT_063ff2e8);
    do {
      uVar6 = func_0x04b8664c(&uStack_70,*(undefined8 *)puVar3);
      if ((uVar6 & 1) == 0) {
        func_0x04b867ec(&uStack_70,*(undefined8 *)puVar2);
        lVar8 = func_0x0380dc7c(*(undefined8 *)puVar1,*(undefined8 *)puVar4);
        return lVar8;
      }
      uVar7 = func_0x05068da0(*(undefined8 *)puVar5,uStack_58,0);
      lVar8 = func_0x0380dc7c(uVar7,*(undefined8 *)puVar4);
    } while (lVar8 == 0);
    func_0x04b867ec(&uStack_70,*(undefined8 *)puVar2);
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  NullReferenceThrowHelper();
}

